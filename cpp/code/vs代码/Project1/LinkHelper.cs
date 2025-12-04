using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DemoLinkGame
{
    /// <summary>
    /// 连连看帮助类
    /// </summary>
    public class LinkHelper
    {
        /// <summary>
        /// 连连看，看板
        /// </summary>
        public int[,] LinkBoard { get; set; }

        /// <summary>
        /// 连线成功事件
        /// </summary>
        public event EventHandler SucClick;

        /// <summary>
        /// 连接失败事件
        /// </summary>
        public event EventHandler FailClick;

        private int col = 10;

        public int Col
        {
            get
            {
                return col;
            }

            set
            {
                col = value;
            }
        }

        private int row = 10;

        public int Row
        {
            get
            {
                return row;
            }

            set
            {
                row = value;
            }
        }

        /// <summary>
        /// 尝试连线
        /// </summary>
        public void LinkLine(Point first, Point second)
        {
            EventArgs e = new EventArgs();
            if (checkLink(first, second))
            {
                //连线成功
                this.LinkBoard[first.X, first.Y] = 0;
                this.LinkBoard[second.X, second.Y] = 0;
                if (this.SucClick != null)
                {
                    SucClick(this, e);
                }
            }
            else {
                //连线失败
                if (this.FailClick != null)
                {
                    FailClick(this, e);
                }
            }
        }

        /// <summary>
        /// 是否赋值
        /// </summary>
        /// <param name="p"></param>
        /// <returns></returns>
        public bool IsChecked(Point p)
        {
            bool flag = false;
            if (p.X != -1 && p.Y != -1)
            {
                flag = true;
            }
            return flag;
        }

        #region 核心算法

        /// <summary>
        /// 判断是否连线成功
        /// </summary>
        /// <param name="a">第一个点击对象</param>
        /// <param name="b">第二个点击对象</param>
        /// <returns></returns>
        private bool checkLink(Point a, Point b)
        {
            if (!Point.Equals(a, b))
            {
                if (this.LinkBoard[a.X, a.Y] == this.LinkBoard[b.X, b.Y])
                {
                    if (a.X == b.X && horizon(a, b))
                    {
                        return true;
                    }
                    if (a.Y == b.Y && vertical(a, b))
                    {
                        return true;
                    }
                    if (oneCorner(a, b))
                    {
                        return true;
                    }
                    else
                    {
                        return twoCorner(a, b);
                    }
                }
                else {
                    //如果点击的不是同一个图案，直接返回false
                    return false;
                }
            }
            else {
                //如果点击的是同一个位置的图案，直接返回false;
                return false;
            }
        }

        /// <summary>
        /// 水平连线
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        private bool horizon(Point a, Point b)
        {
            int col_start = a.Y < b.Y ? a.Y : b.Y;        //获取a,b中较小的y值
            int col_end = a.Y < b.Y ? b.Y : a.Y;          //获取a,b中较大的值
           
            //遍历a,b之间是否通路，如果一个不是就返回false;
            for (int i = col_start + 1; i < col_end; i++)
            {
                if (this.LinkBoard[a.X, i] != 0)
                {
                    return false;
                }
            }
            return true;
        }

        /// <summary>
        /// 垂直连线
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        private bool vertical(Point a, Point b)
        {
            int row_start = a.X < b.X ? a.X : b.X;
            int row_end = a.X < b.X ? b.X : a.X;
            for (int i = row_start + 1; i < row_end; i++)
            {
                if (this.LinkBoard[i, a.Y] != 0)
                {
                    return false;
                }
            }
            return true;
        }

        /// <summary>
        /// 一个拐角
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        private bool oneCorner(Point a, Point b)
        {
            Point c = new Point(b.X, a.Y);
            Point d = new Point(a.X, b.Y);
            //判断C点是否有元素                
            if (this.LinkBoard[c.X, c.Y] == 0)
            {
                bool path1 = horizon(b, c) && vertical(a, c);
                return path1;
            }
            //判断D点是否有元素
            if (this.LinkBoard[d.X, d.Y] == 0)
            {
                bool path2 = horizon(a, d) && vertical(b, d);
                return path2;
            }
            else
            {
                return false;
            }
        }

        /// <summary>
        /// 两个拐角
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        private bool twoCorner(Point a, Point b)
        {
            List<Line> ll = scan(a, b);
            if (ll.Count == 0)
            {
                return false;
            }
            for (int i = 0; i < ll.Count; i++)
            {
                Line tmpLine = ll[i];
                if (tmpLine.direct == 1)
                {

                    if (vertical(a, tmpLine.a) && vertical(b, tmpLine.b))
                    {
                        return true;
                    }
                }
                else if (tmpLine.direct == 0)
                {
                    if (horizon(a, tmpLine.a) && horizon(b, tmpLine.b))
                    {
                        return true;
                    }
                }
            }
            return false;
        }

        /// <summary>
        /// 扫描A与B之间的连接点组成的线
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        private List<Line> scan(Point a, Point b)
        {
            List<Line> linkList = new List<Line>();
            //检测a点,b点的左侧是否能够垂直直连
            for (int i = a.Y; i >= 0; i--)
            {
                if (this.LinkBoard[a.X, i] == 0 && this.LinkBoard[b.X, i] == 0 && vertical(new Point(a.X, i), new Point(b.X, i)))
                {
                    linkList.Add(new Line(new Point(a.X, i), new Point(b.X, i), 0));
                }
            }
            //检测a点,b点的右侧是否能够垂直直连
            for (int i = a.Y; i < Col; i++)
            {
                if (this.LinkBoard[a.X, i] == 0 && this.LinkBoard[b.X, i] == 0 && vertical(new Point(a.X, i), new Point(b.X, i)))
                {
                    linkList.Add(new Line(new Point(a.X, i), new Point(b.X, i), 0));
                }
            }
            //检测a点,b点的上侧是否能够水平直连
            for (int j = a.X; j >= 0; j--)
            {
                if (this.LinkBoard[j, a.Y] == 0 && this.LinkBoard[j, b.Y] == 0 && horizon(new Point(j, a.Y), new Point(j, b.Y)))
                {
                    linkList.Add(new Line(new Point(j, a.Y), new Point(j, b.Y), 1));
                }
            }
            //检测a点,b点的下侧是否能够水平直连
            for (int j = a.X; j < Row; j++)
            {
                if (this.LinkBoard[j, a.Y] == 0 && this.LinkBoard[j, b.Y] == 0 && horizon(new Point(j, a.Y), new Point(j, b.Y)))
                {
                    linkList.Add(new Line(new Point(j, a.Y), new Point(j, b.Y), 1));

                }
            }

            return linkList;
        }

        #endregion
    }

    public class Line
    {
        public Point a;
        public Point b;
        public int direct; //连线方向1:水平直连 0:垂直直连
        public Line(Point a, Point b, int direct)
        {
            this.a = a;
            this.b = b;
            this.direct = direct;
        }

    }
}
