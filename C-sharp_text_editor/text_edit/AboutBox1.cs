using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data;
using MySql.Data;
using MySql.Data.MySqlClient;


namespace text_edit
{
    partial class AboutBox1 : Form
    {
        public AboutBox1()
        {
            InitializeComponent();
            this.Text = String.Format("About Text Edit!");
            
        }

        private void okButton_Click_1(object sender, EventArgs e)
        {
            this.Close(); //Completely closes the form to reduce processing and memory usage.
            Form1 main = new Form1(); //creates a new object to call the original form.
            main.Show(); //Shows the hidden form.
        }

        private void validation_button_Click(object sender, EventArgs e) {

            String licensee = "Licensee: ";
            license_label.Text = licensee;

            MySqlConnection cnn;
            /*string to hold the MySql database information. 
             * These database credentials can be changed, and you are not locked into this format but, for simplicities sake, keeping this order and field names allows it to work as intended. 
             * They need to be 100% accurate or it will cause errors.
             */
            string connection_string = "server=91.121.141.226;user=web_apps;database=licensing;port=3306;password=web_apps;sslmode=none;"; 
            try
            {
                cnn = new MySqlConnection(connection_string); //creates object needed to connect to the database and gives it the information needed to sign in. 
                cnn.Open(); //opens a connection to the database.
                MySqlCommand check_keys = new MySqlCommand("SELECT * FROM users WHERE (license = @input)", cnn); //Stores SQL command for that connection. This could be changed to any type of SQL command.
                string input = Microsoft.VisualBasic.Interaction.InputBox("Please insert your key for Text Edit!", "License Key", "Default", 0, 0); //input box to get the users licence key.

                /*replaces @input with a chosen parameter, in this case it is the information stored in "input".
                 * @input could be used for other things, gathering information for other fields, however everything from the input box and the MySQL querie would need to be changed
                 */ 
                check_keys.Parameters.AddWithValue("@input", input); 


                MySqlDataReader reader = check_keys.ExecuteReader(); //Creates the reader that obtains the user data and unleashes it onto the database.

                if(reader.Read())
                {
                    license_label.Text = "Licensee: " + reader.GetValue(1).ToString(); //takes the second value that the reader obtains, converts it to a string and then replaces the label text with it.
                    licensee = license_label.Text;
                    cnn.Close(); //closes database connection.
                }

                else
                {
                    license_label.Text = "Licensee: Invalid.";
                    licensee = license_label.Text;
                }
            }

            catch(MySql.Data.MySqlClient.MySqlException ex) //A catch to show all exceptions to the try in a message box. This acts as a debugging tool.
            {
                MessageBox.Show(ex.Message);
            }
        }
    }
}
