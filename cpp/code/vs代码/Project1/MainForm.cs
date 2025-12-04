using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DemoLinkGame
{
    public partial class MainForm : Form
    {
        private int curDelay = 0;//当前剩余时间

        private LinkHelper linkHelper = new LinkHelper();//连连看帮助类

        private Point first = new Point(-1, -1);//第一次点击的位置

        private Point second = new Point(-1,-1);//第二次点击的位置

        private int score = 0;

        private bool isClosing = false;

        public MainForm()
        {
            InitializeComponent();
 
            //以下采用双缓冲方式，减少闪烁
            this.SetStyle(ControlStyles.OptimizedDoubleBuffer, true);
            this.SetStyle(ControlStyles.AllPaintingInWmPaint, true);
            this.SetStyle(ControlStyles.UserPaint, true);
            this.linkHelper.SucClick += LinkHelper_SucClick;
            this.linkHelper.FailClick += LinkHelper_FailClick;
        }

        protected override CreateParams CreateParams
        {
            get
            {
                CreateParams cp = base.CreateParams;
                cp.ExStyle |= 0x02000000;
                return cp;
            }
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
           
        }

        /// <summary>
        /// 初始化连连看板
        /// 如何保证初始化的图片是随机的而且是配对的，使得游戏的图片最后可以完全消除
        /// </summary>
        private void InitLinkBoard()
        {
            //设置tableLayoutPanel的列数和行数
            this.tbPnl01.ColumnCount = 12;
            this.tbPnl01.RowCount = 12;
            this.tbPnl01.ColumnStyles.Clear();
            this.tbPnl01.RowStyles.Clear();
            this.tbPnl01.Controls.Clear();
            for (int i = 0; i < 12; i++)
            {
                //设置等宽等高
                if (i == 0 || i == 11)
                {
                    this.tbPnl01.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 2));
                    this.tbPnl01.RowStyles.Add(new RowStyle(SizeType.Percent, 2));
                }
                else {
                    this.tbPnl01.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 10));
                    this.tbPnl01.RowStyles.Add(new RowStyle(SizeType.Percent, 10));
                }
            }
            this.tbPnl01.Padding = new Padding(1);
            this.tbPnl01.CellBorderStyle = TableLayoutPanelCellBorderStyle.None;//不显示边框线
            long tick = DateTime.Now.Ticks;
            Random r = new Random((int)(tick & 0xffffffffL) | (int)(tick >> 32));//用于产生不重复随机数
            int[,] linkBoard = new int[12,12];//棋盘周围空出一圈0
            this.linkHelper.Row = 12;
            this.linkHelper.Col = 12;
            for (int row = 1; row < 11; row++)
            {
                for (int col = 1; col < 11; col++)
                {
                    int rnd = r.Next(1,1000) % 17+1;
                    string img = string.Format("_{0}", rnd.ToString("00"));
                    linkBoard[row, col] = rnd;
                    Button btnLinker = new Button()
                    {
                        BackgroundImage = GetImageByName(img),
                        BackgroundImageLayout = ImageLayout.Stretch,
                        Tag = img,
                        Name = string.Format("{0},{1}", row, col),
                        Dock = DockStyle.Fill,
                        Margin = new Padding(1),
                    };
                    btnLinker.Click += BtnLinker_Click;
                    this.tbPnl01.Controls.Add(btnLinker, col, row);
                }
            }
            this.linkHelper.LinkBoard = linkBoard;//初始化棋盘
            this.tbPnl01.Enabled = false;
        }
        
        internal static Bitmap GetImageByName(string name)
        {
            object obj = global::DemoLinkGame.Properties.Resources.ResourceManager.GetObject(name, global::DemoLinkGame.Properties.Resources.Culture);
            return ((Bitmap)(obj));
        }

        #region 事件

        /// <summary>
        /// 开始按钮
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btnPlay_Click(object sender, EventArgs e)
        {
            this.btnPlay.Enabled = false;
            //先初始化连连看板
            InitLinkBoard();
            //设置时间以及按钮
            this.curDelay = pbTimeDelay.Maximum;
            this.pbTimeDelay.Value = this.curDelay;
            this.lblTimeDelay.Text = this.curDelay.ToString();
            this.tbPnl01.Enabled = true;
            score = 0;
            Thread timeDelay= new Thread(new ThreadStart(this.timeDelay_Tick));
            timeDelay.Start();//启动定时器线程
            
        }

        /// <summary>
        /// 停止
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btnStop_Click(object sender, EventArgs e)
        {
            this.curDelay = 0;
            Thread.Sleep(100);
        }

        /// <summary>
        /// 定时器事件：时间剩余
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void timeDelay_Tick()
        {
            while (this.curDelay > 0)
            {
                if (!isClosing)
                {
                    this.pbTimeDelay.Invoke(new Action(() =>
                    {
                        this.curDelay--;
                        this.pbTimeDelay.Value = this.curDelay;
                        this.lblTimeDelay.Text = this.curDelay.ToString();
                    }));
                }
                Thread.Sleep(1000);
            }
            if (!isClosing)
            {
                this.Invoke(new Action(() =>
                {
                    this.btnPlay.Enabled = true;
                    this.tbPnl01.Enabled = false;
                }));
            }
        }

        /// <summary>
        /// 按钮单击事件
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void BtnLinker_Click(object sender, EventArgs e)
        {
            Button btnLinker = (Button)sender;
            btnLinker.FlatStyle = FlatStyle.Flat;
            btnLinker.FlatAppearance.BorderColor = Color.Red;
            btnLinker.FlatAppearance.BorderSize = 2;
            string[] loc = btnLinker.Name.Split(',');
            if (!linkHelper.IsChecked(first))
            {
                first = new Point(int.Parse(loc[0]), int.Parse(loc[1]));
            }
            else {
                second= new Point(int.Parse(loc[0]), int.Parse(loc[1]));
                //如果就第二次点击，则进行判断
                linkHelper.LinkLine(first, second);
            }
        }

        /// <summary>
        /// 连接成功事件
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void LinkHelper_SucClick(object sender, EventArgs e)
        {
            //连接成功，则删除，重新初始化
            this.tbPnl01.GetControlFromPosition(this.first.Y, this.first.X).Visible=false;
            this.tbPnl01.GetControlFromPosition(this.second.Y, this.second.X).Visible = false;
            this.first = new Point(-1, -1);
            this.second = new Point(-1, -1);
            this.score += 10;
            this.lblScore.Text = string.Format("分数：{0}",score);
        }

        /// <summary>
        /// 连接失败事件
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void LinkHelper_FailClick(object sender, EventArgs e)
        {
            //连接失败，则第一个按钮取消选择
            Control c1=  this.tbPnl01.GetControlFromPosition(this.first.Y, this.first.X);
            ((Button)c1).FlatAppearance.BorderSize = 0;
            this.first = new Point(this.second.X, this.second.Y);
            this.second = new Point(-1, -1);
        }

        #endregion

        /// <summary>
        /// 界面关闭事件
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void MainForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            this.isClosing = true;
            this.btnStop_Click(null,null);
            ////界面关闭，终止线程
            //if (this.timeDelay != null && this.timeDelay.ThreadState == ThreadState.Running) {
            //    this.timeDelay.Abort();
            //}
        }
    }
}
