using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace text_edit
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            //Indents the text in by a defined amount.
            main_text_box.SelectionRightIndent += 15;
            main_text_box.SelectionIndent += 15;

            menuStrip1.ForeColor = Color.White;
        }

        //Function to open files that have already been created to edit them.
        private void file_o_file_Click(object sender, EventArgs e)
        {
            Stream my_stream = null; //Initialises the variable we will be using for the data stream.
            OpenFileDialog open_file = new OpenFileDialog();

            open_file.InitialDirectory = "c:\\"; //Sets the initial directory for the file dialogue.
            open_file.Filter = "txt files (*.txt)|*.txt| C++ files (*.c; *.cpp; *.h) |*.c; *.cpp; *.h| HTML files (*.htm; *.html) | *.htm; *.html | CSS files (*.css) | *.css | PHP files (*.php) | *.php| All files (*.*)|*.*"; //List of file types and file type categories to filter in the dialogue.
            
            /*Defines which filter option to set as the default. 
            1 sets this to txt files, if in the future more options were added or the main usage was changes, then changing this number would change what default file type would be used.*/
            open_file.FilterIndex = 1; 

            open_file.RestoreDirectory = true;

            if (open_file.ShowDialog() == DialogResult.OK)
            {
                try
                {
                    if ((my_stream = open_file.OpenFile()) != null)
                    {
                        using (my_stream)
                        {
                            main_text_box.Text = File.ReadAllText(open_file.FileName); //Fills the main text box with the text read from the file chosen in the dialogue box.
                            this.Text = open_file.FileName;
                        }
                    }
                }
                catch (Exception ex) //Exception to give as an error if it does not match the if/try statement.
                {
                    MessageBox.Show("Error: Could not read file from disk. Original error: " + ex.Message);
                }
            }

        }

        private void main_text_box_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {

            }
        }

        private void file_save_click(object sender, EventArgs e)
        {
            SaveFileDialog save_file = new SaveFileDialog();

            save_file.InitialDirectory = "c:\\";
            save_file.Filter = "txt files (*.txt)|*.txt| C++ files (*.c; *.cpp; *.h) |*.c; *.cpp; *.h| HTML files (*.htm; *.html) | *.htm; *.html | CSS files (*.css) | *.css | PHP files (*.php) | *.php| All files (*.*)|*.*";
            save_file.FilterIndex = 1;
            save_file.RestoreDirectory = true;
            save_file.AddExtension = true;

            if (this.Text == "Untitled" && save_file.ShowDialog() == DialogResult.OK)
            {
                this.Text = save_file.FileName;
                main_text_box.SaveFile(save_file.FileName, RichTextBoxStreamType.PlainText);

            }

            else if (this.Text != "Untitled")
            {
                string path = this.Text;
                string text_to_add = main_text_box.Text;
                using (StreamWriter writer = new StreamWriter(path, false))
                {
                    writer.Write(text_to_add);
                }

                auto_save();

            }

        }

        //Auto save functionality to attempt to preserve as much data as possible.
        private void auto_save()
        {
            Timer timer = new Timer(); //Creates the timer object.
            timer.Start(); //Starts the timer.
            timer.Interval = 600000; //Sets the interval to about 10 minutes. Intervals are in miliseconds. So to work out minutes you need to divide it by 1000.
            timer.Enabled = true; //Makes sure the timer is enabled.
            timer.Tick += new EventHandler(timer_tick); //Once the interval gets to zero it sends the event to be handled by the timer_tick function.
        }

        //Timer event handler.
        private void timer_tick(Object sender, EventArgs e)
        {
            string path = this.Text; //Sets the forms text to the variable 'path'.
            string text_to_add = main_text_box.Text; //sets the text box information to a variable of what to save or to "add" to the file.
            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.Write(text_to_add); //Writes to the save file.
            }
        }

        private void file_save_as_Click(object sender, EventArgs e)
        {
            SaveFileDialog save_file = new SaveFileDialog();

            save_file.InitialDirectory = "c:\\";
            save_file.Filter = "txt files (*.txt)|*.txt| C++ files (*.c; *.cpp; *.h) |*.c; *.cpp; *.h| HTML files (*.htm; *.html) | *.htm; *.html | CSS files (*.css) | *.css | PHP files (*.php) | *.php| All files (*.*)|*.*";
            save_file.FilterIndex = 1;
            save_file.RestoreDirectory = true;
            save_file.AddExtension = true; //This assures that if someone doesn't type the extension in the name then it automatically generates it.

            if (save_file.ShowDialog() == DialogResult.OK)
            {

                this.Text = save_file.FileName;
                main_text_box.SaveFile(save_file.FileName, RichTextBoxStreamType.PlainText);

            }
        }

        //This function sets up a "new" page.
        private void file_new_Click(object sender, EventArgs e)
        {
            main_text_box.Clear(); //Clears out the text box of any data.
            this.Text = "Untitled"; //Sets the name of the document to untitled to not start any of the auto save functions.
        }

        private void edit_copy_Click(object sender, EventArgs e)
        {
            main_text_box.Copy(); //This is a function within the RichTextBox object. This allows the clipboard to only have the correct data in the correct format being saved to it.
        }

        private void edit_paste_Click(object sender, EventArgs e)
        {
            main_text_box.Paste(); //Pastes the richtextbox data in the correct format from what was already saved into the clipboard.
        }

        private void edit_cut_Click(object sender, EventArgs e)
        {
                main_text_box.Cut();
        }
        private void edit_undo_Click(object sender, EventArgs e)
        {

        }

        private void text_changed(object sender, EventArgs e)
        {
            auto_save(); //restarts the function.
        }

        private void other_about_Click(object sender, EventArgs e)
        {
            this.Hide(); //Hides the current form, this is to make sure no data is lost if a user were to access this menu accidentally.
            AboutBox1 a_box = new AboutBox1();
            a_box.Show(); //Shows the new form.
        }

        private void other_help_Click(object sender, EventArgs e)
        {
            this.Hide();
            help_form help = new help_form();
            help.Show();

        }
    }
}

