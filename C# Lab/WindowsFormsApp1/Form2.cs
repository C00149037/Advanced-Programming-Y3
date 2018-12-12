using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Calculator_Click(object sender, EventArgs e)
        {
            this.Hide();
            Form1 f1 = new Form1();
            f1.ShowDialog();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            string temp = listBox1.SelectedItem.ToString();
            if(temp == "Pounds")
            {
                textBox2.Text = "Euro";
            }
            else if (temp == "Euro")
            {
                textBox2.Text = "Pounds";
            }
            else if (temp == "Feet")
            {
                textBox2.Text = "Inches";
            }
            else if (temp == "Inches")
            {
                textBox2.Text = "Feet";
            }
            else if (temp == "Celsius")
            {
                textBox2.Text = "Fahrenheit";
            }
            else if (temp == "Fahrenheit")
            {
                textBox2.Text = "Celsius";
            }

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void Calculate_Click(object sender, EventArgs e)
        {
            double result = Convert.ToDouble(textBox1.Text);
            if (listBox1.SelectedItem.ToString() == "Pounds")
            {
                textBox3.Text = "" + (result * 1.11);
            }
            else if (listBox1.SelectedItem.ToString() == "Euro")
            {
                textBox3.Text = "" + (result * .9);
            }
            else if (listBox1.SelectedItem.ToString() == "Feet")
            {
                textBox3.Text = "" + (result * 12);
            }
            else if (listBox1.SelectedItem.ToString() == "Inches")
            {
                textBox3.Text = "" + (result / 12);
            }
            else if (listBox1.SelectedItem.ToString() == "Celsius")
            {
                textBox3.Text = "" + ((result * 9 / 5) + 32);
            }
            else if (listBox1.SelectedItem.ToString() == "Fahrenheit")
            {
                textBox3.Text = "" + ((result - 32) * 5 / 9);
            }
        }
    }
}
