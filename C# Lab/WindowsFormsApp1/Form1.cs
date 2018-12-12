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
    public partial class Form1 : Form
    {
        double num1, num2,total;
        string oper = "" ;
        bool input = false;
      
        public Form1()
        {
            InitializeComponent();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "2";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "3";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "1";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "4";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "5";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "6";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "7";
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "8";
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "9";
        }

        private void button10_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + "0";
        }

        private void buttonDecPoint_Click(object sender, EventArgs e)
        {

            string j = textBox1.Text;
            int t = j.Length; //Get length of text field
            
            bool decP = false;

            for (int i = 0; i < t; i++)                         //Loop through text field
            {
                if (j[i] == '.')
                {
                    decP = true;                            //If there is a decimal point, do nothing
                }
            }
            if (decP == false)                              //If there is no decimal point, add decimal point
            {                                               //to text already in textfield
                textBox1.Text = textBox1.Text + ".";
            }

        }

        private void buttonPlus_Click(object sender, EventArgs e)
        {
            if(input == false)
            {
                num1 = Convert.ToDouble(textBox1.Text);
            }
            else
            {

                if (oper == "+")                                //If operand is +
                {
                    num1 = num1 + Convert.ToDouble(textBox1.Text);
                }
                if (oper == "-")                                //If operand is -
                {
                    num1 = num1 - Convert.ToDouble(textBox1.Text);
                }
                if (oper == "x")                                //If operand is *
                {
                    num1 = num1 * Convert.ToDouble(textBox1.Text);
                }
                if (oper == "÷")                                //If operand is ÷
                {
                    num1 = num1 / Convert.ToDouble(textBox1.Text);
                }
            }
            textBox2.Text = num1 +  "+";
            textBox1.Text = "";
            oper = "+";
            input = true;
            
            
        }

        private void buttonMinus_Click(object sender, EventArgs e)
        {
            if (input == false)
            {
                num1 = Convert.ToDouble(textBox1.Text);
            }
            else
            {

                if (oper == "+")                                //If operand is +
                {
                    num1 = num1 + Convert.ToDouble(textBox1.Text);
                }
                if (oper == "-")                                //If operand is -
                {
                    num1 = num1 - Convert.ToDouble(textBox1.Text);
                }
                if (oper == "x")                                //If operand is *
                {
                    num1 = num1 * Convert.ToDouble(textBox1.Text);
                }
                if (oper == "÷")                                //If operand is ÷
                {
                    num1 = num1 / Convert.ToDouble(textBox1.Text);
                }
            }
            textBox2.Text = num1 + "-";
            textBox1.Text = "";
            oper = "-";
            input = true;
            
        }

        private void buttonMultiply_Click(object sender, EventArgs e)
        {
            if (input == false)
            {
                num1 = Convert.ToDouble(textBox1.Text);
            }
            else
            {

                if (oper == "+")                                //If operand is +
                {
                    num1 = num1 + Convert.ToDouble(textBox1.Text);
                }
                if (oper == "-")                                //If operand is -
                {
                    num1 = num1 - Convert.ToDouble(textBox1.Text);
                }
                if (oper == "x")                                //If operand is *
                {
                    num1 = num1 * Convert.ToDouble(textBox1.Text);
                }
                if (oper == "÷")                                //If operand is ÷
                {
                    num1 = num1 / Convert.ToDouble(textBox1.Text);
                }
            }
            textBox2.Text = num1 + "x";
            textBox1.Text = "";
            oper = "x";
            input = true;
        }

        private void buttonDivide_Click(object sender, EventArgs e)
        {
            if (input == false)
            {
                num1 = Convert.ToDouble(textBox1.Text);
            }
            else
            {

                if (oper == "+")                                //If operand is +
                {
                    num1 = num1 + Convert.ToDouble(textBox1.Text);
                }
                if (oper == "-")                                //If operand is -
                {
                    num1 = num1 - Convert.ToDouble(textBox1.Text);
                }
                if (oper == "x")                                //If operand is *
                {
                    num1 = num1 * Convert.ToDouble(textBox1.Text);
                }
                if (oper == "÷")                                //If operand is ÷
                {
                    num1 = num1 / Convert.ToDouble(textBox1.Text);
                }
            }
            textBox2.Text = num1 + "÷";
            textBox1.Text = "";
            oper = "÷";
            input = true;
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            input = false;
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void converter_Click(object sender, EventArgs e)
        {
            this.Hide();
            Form2 f2 = new Form2();
            f2.ShowDialog();
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void buttonEquals_Click(object sender, EventArgs e)
        {
            num2 = Convert.ToDouble(textBox1.Text);
            textBox2.Text = num1 + oper + num2 + "=";
            if (oper == "+")                                //If operand is +
            {
                total = num1 + num2;                        //Add the numbers together
                textBox1.Text = "" + total;               //Set text field to the result
            }
            if (oper == "-")                                //If operand is -
            {
                total = num1 - num2;                        //Take num2 away from num1
                textBox1.Text = "" + total;                //Set text field to the result
            }
            if (oper == "x")                                //If operand is *
            {
                total = num1 * num2;                        //multiply both numbers
                textBox1.Text = "" + total;              //Set text field to the result
            }
            if (oper == "÷")                                //If operand is ÷
            {
                total = num1 / num2;                        //divide num1 by num2
                textBox1.Text = "" + total;              //Set text field to the result
            }
            oper = "";
            input = false;
        }
    }

}
