namespace text_edit
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.file = new System.Windows.Forms.ToolStripMenuItem();
            this.file_new = new System.Windows.Forms.ToolStripMenuItem();
            this.file_open = new System.Windows.Forms.ToolStripMenuItem();
            this.file_o_file = new System.Windows.Forms.ToolStripMenuItem();
            this.file_save = new System.Windows.Forms.ToolStripMenuItem();
            this.file_save_as = new System.Windows.Forms.ToolStripMenuItem();
            this.edit = new System.Windows.Forms.ToolStripMenuItem();
            this.edit_cut = new System.Windows.Forms.ToolStripMenuItem();
            this.edit_copy = new System.Windows.Forms.ToolStripMenuItem();
            this.edit_paste = new System.Windows.Forms.ToolStripMenuItem();
            this.other = new System.Windows.Forms.ToolStripMenuItem();
            this.other_about = new System.Windows.Forms.ToolStripMenuItem();
            this.other_help = new System.Windows.Forms.ToolStripMenuItem();
            this.save_file = new System.Windows.Forms.SaveFileDialog();
            this.main_text_box = new System.Windows.Forms.RichTextBox();
            this.richTextBox1 = new System.Windows.Forms.RichTextBox();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.BackColor = System.Drawing.Color.Black;
            this.menuStrip1.Font = new System.Drawing.Font("Calibri", 9F);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.file,
            this.edit,
            this.other});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(800, 24);
            this.menuStrip1.TabIndex = 1;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // file
            // 
            this.file.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.file_new,
            this.file_open,
            this.file_save,
            this.file_save_as});
            this.file.Name = "file";
            this.file.Size = new System.Drawing.Size(40, 20);
            this.file.Text = "File";
            // 
            // file_new
            // 
            this.file_new.Name = "file_new";
            this.file_new.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.N)));
            this.file_new.Size = new System.Drawing.Size(173, 22);
            this.file_new.Text = "New";
            this.file_new.Click += new System.EventHandler(this.file_new_Click);
            // 
            // file_open
            // 
            this.file_open.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.file_o_file});
            this.file_open.Name = "file_open";
            this.file_open.Size = new System.Drawing.Size(173, 22);
            this.file_open.Text = "Open";
            // 
            // file_o_file
            // 
            this.file_o_file.Name = "file_o_file";
            this.file_o_file.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.O)));
            this.file_o_file.Size = new System.Drawing.Size(166, 22);
            this.file_o_file.Text = "Open FIle";
            this.file_o_file.Click += new System.EventHandler(this.file_o_file_Click);
            // 
            // file_save
            // 
            this.file_save.Name = "file_save";
            this.file_save.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.S)));
            this.file_save.Size = new System.Drawing.Size(173, 22);
            this.file_save.Text = "Save";
            this.file_save.Click += new System.EventHandler(this.file_save_click);
            // 
            // file_save_as
            // 
            this.file_save_as.Name = "file_save_as";
            this.file_save_as.ShortcutKeys = ((System.Windows.Forms.Keys)(((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.Alt) 
            | System.Windows.Forms.Keys.S)));
            this.file_save_as.Size = new System.Drawing.Size(173, 22);
            this.file_save_as.Text = "Save As";
            this.file_save_as.Click += new System.EventHandler(this.file_save_as_Click);
            // 
            // edit
            // 
            this.edit.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.edit_cut,
            this.edit_copy,
            this.edit_paste});
            this.edit.Name = "edit";
            this.edit.Size = new System.Drawing.Size(40, 20);
            this.edit.Text = "Edit";
            // 
            // edit_cut
            // 
            this.edit_cut.Name = "edit_cut";
            this.edit_cut.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.X)));
            this.edit_cut.Size = new System.Drawing.Size(142, 22);
            this.edit_cut.Text = "Cut";
            this.edit_cut.Click += new System.EventHandler(this.edit_cut_Click);
            // 
            // edit_copy
            // 
            this.edit_copy.Name = "edit_copy";
            this.edit_copy.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.C)));
            this.edit_copy.Size = new System.Drawing.Size(142, 22);
            this.edit_copy.Text = "Copy";
            this.edit_copy.Click += new System.EventHandler(this.edit_copy_Click);
            // 
            // edit_paste
            // 
            this.edit_paste.Name = "edit_paste";
            this.edit_paste.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.V)));
            this.edit_paste.Size = new System.Drawing.Size(142, 22);
            this.edit_paste.Text = "Paste";
            this.edit_paste.Click += new System.EventHandler(this.edit_paste_Click);
            // 
            // other
            // 
            this.other.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.other_about,
            this.other_help});
            this.other.Name = "other";
            this.other.Size = new System.Drawing.Size(25, 20);
            this.other.Text = "?";
            // 
            // other_about
            // 
            this.other_about.Name = "other_about";
            this.other_about.Size = new System.Drawing.Size(180, 22);
            this.other_about.Text = "About text edit";
            this.other_about.Click += new System.EventHandler(this.other_about_Click);
            // 
            // other_help
            // 
            this.other_help.Name = "other_help";
            this.other_help.Size = new System.Drawing.Size(180, 22);
            this.other_help.Text = "Help";
            this.other_help.Click += new System.EventHandler(this.other_help_Click);
            // 
            // main_text_box
            // 
            this.main_text_box.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(58)))), ((int)(((byte)(58)))), ((int)(((byte)(58)))));
            this.main_text_box.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.main_text_box.ForeColor = System.Drawing.Color.White;
            this.main_text_box.Location = new System.Drawing.Point(54, 24);
            this.main_text_box.Margin = new System.Windows.Forms.Padding(2, 3, 2, 3);
            this.main_text_box.Name = "main_text_box";
            this.main_text_box.Size = new System.Drawing.Size(746, 460);
            this.main_text_box.TabIndex = 2;
            this.main_text_box.Text = "";
            // 
            // richTextBox1
            // 
            this.richTextBox1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(58)))), ((int)(((byte)(58)))), ((int)(((byte)(58)))));
            this.richTextBox1.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.richTextBox1.Dock = System.Windows.Forms.DockStyle.Left;
            this.richTextBox1.Location = new System.Drawing.Point(0, 24);
            this.richTextBox1.Name = "richTextBox1";
            this.richTextBox1.Size = new System.Drawing.Size(60, 460);
            this.richTextBox1.TabIndex = 3;
            this.richTextBox1.Text = "";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 14F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoScroll = true;
            this.BackColor = System.Drawing.Color.Black;
            this.ClientSize = new System.Drawing.Size(800, 484);
            this.Controls.Add(this.richTextBox1);
            this.Controls.Add(this.main_text_box);
            this.Controls.Add(this.menuStrip1);
            this.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.Font = new System.Drawing.Font("Arial", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ForeColor = System.Drawing.Color.White;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MainMenuStrip = this.menuStrip1;
            this.Margin = new System.Windows.Forms.Padding(2, 3, 2, 3);
            this.Name = "Form1";
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.Text = "Untitled";
            this.TextChanged += new System.EventHandler(this.text_changed);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem file;
        private System.Windows.Forms.ToolStripMenuItem file_new;
        private System.Windows.Forms.ToolStripMenuItem file_open;
        private System.Windows.Forms.ToolStripMenuItem file_save;
        private System.Windows.Forms.ToolStripMenuItem file_save_as;
        private System.Windows.Forms.ToolStripMenuItem edit;
        private System.Windows.Forms.ToolStripMenuItem edit_cut;
        private System.Windows.Forms.ToolStripMenuItem edit_copy;
        private System.Windows.Forms.ToolStripMenuItem edit_paste;
        private System.Windows.Forms.ToolStripMenuItem other;
        private System.Windows.Forms.ToolStripMenuItem other_about;
        private System.Windows.Forms.ToolStripMenuItem other_help;
        private System.Windows.Forms.ToolStripMenuItem file_o_file;
        private System.Windows.Forms.SaveFileDialog save_file;
        private System.Windows.Forms.RichTextBox main_text_box;
        private System.Windows.Forms.RichTextBox richTextBox1;
    }
}

