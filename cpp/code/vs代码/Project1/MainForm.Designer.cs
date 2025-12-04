namespace DemoLinkGame
{
    partial class MainForm
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.spCtrl1 = new System.Windows.Forms.SplitContainer();
            this.lblScore = new System.Windows.Forms.Label();
            this.lblTimeDelay = new System.Windows.Forms.Label();
            this.pbTimeDelay = new System.Windows.Forms.ProgressBar();
            this.btnStop = new System.Windows.Forms.Button();
            this.btnPlay = new System.Windows.Forms.Button();
            this.tbPnl01 = new System.Windows.Forms.TableLayoutPanel();
            ((System.ComponentModel.ISupportInitialize)(this.spCtrl1)).BeginInit();
            this.spCtrl1.Panel1.SuspendLayout();
            this.spCtrl1.Panel2.SuspendLayout();
            this.spCtrl1.SuspendLayout();
            this.SuspendLayout();
            // 
            // spCtrl1
            // 
            this.spCtrl1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.spCtrl1.Location = new System.Drawing.Point(0, 0);
            this.spCtrl1.Name = "spCtrl1";
            // 
            // spCtrl1.Panel1
            // 
            this.spCtrl1.Panel1.BackgroundImage = global::DemoLinkGame.Properties.Resources.bg;
            this.spCtrl1.Panel1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.spCtrl1.Panel1.Controls.Add(this.lblScore);
            this.spCtrl1.Panel1.Controls.Add(this.lblTimeDelay);
            this.spCtrl1.Panel1.Controls.Add(this.pbTimeDelay);
            this.spCtrl1.Panel1.Controls.Add(this.btnStop);
            this.spCtrl1.Panel1.Controls.Add(this.btnPlay);
            this.spCtrl1.Panel1.Font = new System.Drawing.Font("Raleway", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            // 
            // spCtrl1.Panel2
            // 
            this.spCtrl1.Panel2.Controls.Add(this.tbPnl01);
            this.spCtrl1.Size = new System.Drawing.Size(784, 462);
            this.spCtrl1.SplitterDistance = 212;
            this.spCtrl1.TabIndex = 0;
            // 
            // lblScore
            // 
            this.lblScore.Image = global::DemoLinkGame.Properties.Resources.play;
            this.lblScore.Location = new System.Drawing.Point(12, 56);
            this.lblScore.Name = "lblScore";
            this.lblScore.Size = new System.Drawing.Size(100, 40);
            this.lblScore.TabIndex = 4;
            this.lblScore.Text = "分数：0";
            this.lblScore.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // lblTimeDelay
            // 
            this.lblTimeDelay.AutoSize = true;
            this.lblTimeDelay.Location = new System.Drawing.Point(185, 15);
            this.lblTimeDelay.Name = "lblTimeDelay";
            this.lblTimeDelay.Size = new System.Drawing.Size(0, 19);
            this.lblTimeDelay.TabIndex = 3;
            // 
            // pbTimeDelay
            // 
            this.pbTimeDelay.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(255)))), ((int)(((byte)(128)))));
            this.pbTimeDelay.Location = new System.Drawing.Point(3, 12);
            this.pbTimeDelay.MarqueeAnimationSpeed = 1;
            this.pbTimeDelay.Maximum = 120;
            this.pbTimeDelay.Name = "pbTimeDelay";
            this.pbTimeDelay.Size = new System.Drawing.Size(206, 23);
            this.pbTimeDelay.Step = 1;
            this.pbTimeDelay.TabIndex = 2;
            this.pbTimeDelay.Value = 120;
            // 
            // btnStop
            // 
            this.btnStop.BackgroundImage = global::DemoLinkGame.Properties.Resources.play;
            this.btnStop.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.btnStop.Font = new System.Drawing.Font("Raleway", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnStop.Location = new System.Drawing.Point(12, 188);
            this.btnStop.Name = "btnStop";
            this.btnStop.Size = new System.Drawing.Size(100, 40);
            this.btnStop.TabIndex = 1;
            this.btnStop.Text = "Stop";
            this.btnStop.UseVisualStyleBackColor = true;
            this.btnStop.Click += new System.EventHandler(this.btnStop_Click);
            // 
            // btnPlay
            // 
            this.btnPlay.BackgroundImage = global::DemoLinkGame.Properties.Resources.play;
            this.btnPlay.Font = new System.Drawing.Font("Raleway", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnPlay.Location = new System.Drawing.Point(12, 122);
            this.btnPlay.Name = "btnPlay";
            this.btnPlay.Size = new System.Drawing.Size(100, 40);
            this.btnPlay.TabIndex = 0;
            this.btnPlay.Text = "Play";
            this.btnPlay.UseVisualStyleBackColor = true;
            this.btnPlay.Click += new System.EventHandler(this.btnPlay_Click);
            // 
            // tbPnl01
            // 
            this.tbPnl01.BackgroundImage = global::DemoLinkGame.Properties.Resources.bg;
            this.tbPnl01.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Absolute, 568F));
            this.tbPnl01.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tbPnl01.Location = new System.Drawing.Point(0, 0);
            this.tbPnl01.Name = "tbPnl01";
            this.tbPnl01.Size = new System.Drawing.Size(568, 462);
            this.tbPnl01.TabIndex = 0;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(784, 462);
            this.Controls.Add(this.spCtrl1);
            this.DoubleBuffered = true;
            this.Name = "MainForm";
            this.Text = "MainForm--水果连连看";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.MainForm_FormClosing);
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.spCtrl1.Panel1.ResumeLayout(false);
            this.spCtrl1.Panel1.PerformLayout();
            this.spCtrl1.Panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.spCtrl1)).EndInit();
            this.spCtrl1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.SplitContainer spCtrl1;
        private System.Windows.Forms.TableLayoutPanel tbPnl01;
        private System.Windows.Forms.Button btnPlay;
        private System.Windows.Forms.Button btnStop;
        private System.Windows.Forms.ProgressBar pbTimeDelay;
        private System.Windows.Forms.Label lblTimeDelay;
        private System.Windows.Forms.Label lblScore;
    }
}

