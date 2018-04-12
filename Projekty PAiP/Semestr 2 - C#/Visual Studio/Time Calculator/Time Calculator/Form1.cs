using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Time_Calculator {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }

        private void CalculateButton_Click(object sender, EventArgs e) {
            CalculateMethod(1);
        }

        private void MemorizeButton_Click(object sender, EventArgs e) {
            CalculateMethod(2);
        }

        public void CalculateMethod(int button) {
            int i, godziny = 0, minuty = 0, tylkominuty = 0, sekundy = 0, temp = 0;

            string text, text_minutes;

            int[] Minutes = new int[20];
            int[] Seconds = new int[20];

            #region MinutesArray
            if (minuta1.Text == "") Minutes[0] = 0; else Minutes[0] = Convert.ToInt16(minuta1.Text);
            if (minuta2.Text == "") Minutes[1] = 0; else Minutes[1] = Convert.ToInt16(minuta2.Text);
            if (minuta3.Text == "") Minutes[2] = 0; else Minutes[2] = Convert.ToInt16(minuta3.Text);
            if (minuta4.Text == "") Minutes[3] = 0; else Minutes[3] = Convert.ToInt16(minuta4.Text);
            if (minuta5.Text == "") Minutes[4] = 0; else Minutes[4] = Convert.ToInt16(minuta5.Text);
            if (minuta6.Text == "") Minutes[5] = 0; else Minutes[5] = Convert.ToInt16(minuta6.Text);
            if (minuta7.Text == "") Minutes[6] = 0; else Minutes[6] = Convert.ToInt16(minuta7.Text);
            if (minuta8.Text == "") Minutes[7] = 0; else Minutes[7] = Convert.ToInt16(minuta8.Text);
            if (minuta9.Text == "") Minutes[8] = 0; else Minutes[8] = Convert.ToInt16(minuta9.Text);
            if (minuta10.Text == "") Minutes[9] = 0; else Minutes[9] = Convert.ToInt16(minuta10.Text);
            if (minuta11.Text == "") Minutes[10] = 0; else Minutes[10] = Convert.ToInt16(minuta11.Text);
            if (minuta12.Text == "") Minutes[11] = 0; else Minutes[11] = Convert.ToInt16(minuta12.Text);
            if (minuta13.Text == "") Minutes[12] = 0; else Minutes[12] = Convert.ToInt16(minuta13.Text);
            if (minuta14.Text == "") Minutes[13] = 0; else Minutes[13] = Convert.ToInt16(minuta14.Text);
            if (minuta15.Text == "") Minutes[14] = 0; else Minutes[14] = Convert.ToInt16(minuta15.Text);
            if (minuta16.Text == "") Minutes[15] = 0; else Minutes[15] = Convert.ToInt16(minuta16.Text);
            if (minuta17.Text == "") Minutes[16] = 0; else Minutes[16] = Convert.ToInt16(minuta17.Text);
            if (minuta18.Text == "") Minutes[17] = 0; else Minutes[17] = Convert.ToInt16(minuta18.Text);
            if (minuta19.Text == "") Minutes[18] = 0; else Minutes[18] = Convert.ToInt16(minuta19.Text);
            if (minuta20.Text == "") Minutes[19] = 0; else Minutes[19] = Convert.ToInt16(minuta20.Text);
            #endregion

            #region SecondsArray
            if (sekunda1.Text == "") Seconds[0] = 0; else Seconds[0] = Convert.ToInt16(sekunda1.Text);
            if (sekunda2.Text == "") Seconds[1] = 0; else Seconds[1] = Convert.ToInt16(sekunda2.Text);
            if (sekunda3.Text == "") Seconds[2] = 0; else Seconds[2] = Convert.ToInt16(sekunda3.Text);
            if (sekunda4.Text == "") Seconds[3] = 0; else Seconds[3] = Convert.ToInt16(sekunda4.Text);
            if (sekunda5.Text == "") Seconds[4] = 0; else Seconds[4] = Convert.ToInt16(sekunda5.Text);
            if (sekunda6.Text == "") Seconds[5] = 0; else Seconds[5] = Convert.ToInt16(sekunda6.Text);
            if (sekunda7.Text == "") Seconds[6] = 0; else Seconds[6] = Convert.ToInt16(sekunda7.Text);
            if (sekunda8.Text == "") Seconds[7] = 0; else Seconds[7] = Convert.ToInt16(sekunda8.Text);
            if (sekunda9.Text == "") Seconds[8] = 0; else Seconds[8] = Convert.ToInt16(sekunda9.Text);
            if (sekunda10.Text == "") Seconds[9] = 0; else Seconds[9] = Convert.ToInt16(sekunda10.Text);
            if (sekunda11.Text == "") Seconds[10] = 0; else Seconds[10] = Convert.ToInt16(sekunda11.Text);
            if (sekunda12.Text == "") Seconds[11] = 0; else Seconds[11] = Convert.ToInt16(sekunda12.Text);
            if (sekunda13.Text == "") Seconds[12] = 0; else Seconds[12] = Convert.ToInt16(sekunda13.Text);
            if (sekunda14.Text == "") Seconds[13] = 0; else Seconds[13] = Convert.ToInt16(sekunda14.Text);
            if (sekunda15.Text == "") Seconds[14] = 0; else Seconds[14] = Convert.ToInt16(sekunda15.Text);
            if (sekunda16.Text == "") Seconds[15] = 0; else Seconds[15] = Convert.ToInt16(sekunda16.Text);
            if (sekunda17.Text == "") Seconds[16] = 0; else Seconds[16] = Convert.ToInt16(sekunda17.Text);
            if (sekunda18.Text == "") Seconds[17] = 0; else Seconds[17] = Convert.ToInt16(sekunda18.Text);
            if (sekunda19.Text == "") Seconds[18] = 0; else Seconds[18] = Convert.ToInt16(sekunda19.Text);
            if (sekunda20.Text == "") Seconds[19] = 0; else Seconds[19] = Convert.ToInt16(sekunda20.Text);
            #endregion
           

            for (i = 0; i < 20; i++) {
                sekundy += Seconds[i];
                minuty += Minutes[i];
            }

            if ((sekundy / 60) > 0) {
                temp = sekundy / 60;
                minuty += temp;
                sekundy -= 60 * temp;
            }

            temp = 0;
            tylkominuty = minuty;

            if ((minuty / 60) > 0) {
                temp = minuty / 60;
                godziny += temp;
                minuty -= 60 * temp;
            }

            temp = 0;

            #region DisplayingConditions
            if (godziny > 9) {
                if (minuty > 9 && tylkominuty > 9) {
                    if (sekundy > 9) {
                        text = Convert.ToString(godziny) + ":" + Convert.ToString(minuty) + ":0" + Convert.ToString(sekundy);
                        text_minutes = Convert.ToString(tylkominuty) + ":0" + Convert.ToString(sekundy);
                    }
                    else {
                        text = Convert.ToString(godziny) + ":" + Convert.ToString(minuty) + ":" + Convert.ToString(sekundy);
                        text_minutes = Convert.ToString(tylkominuty) + ":" + Convert.ToString(sekundy);
                    }
                }
                else {
                    if (sekundy > 9) {
                        text = Convert.ToString(godziny) + ":0" + Convert.ToString(minuty) + ":" + Convert.ToString(sekundy);
                        text_minutes = "0" + Convert.ToString(tylkominuty) + ":" + Convert.ToString(sekundy);
                    }
                    else {
                        text = Convert.ToString(godziny) + ":0" + Convert.ToString(minuty) + ":0" + Convert.ToString(sekundy);
                        text_minutes = "0" + Convert.ToString(tylkominuty) + ":0" + Convert.ToString(sekundy);
                    }
                }
            }
            else {
                if (minuty > 9 && tylkominuty > 9) {
                    if (sekundy > 9) {
                        text = "0" + Convert.ToString(godziny) + ":" + Convert.ToString(minuty) + ":" + Convert.ToString(sekundy);
                        text_minutes = Convert.ToString(tylkominuty) + ":" + Convert.ToString(sekundy);
                    }
                    else {
                        text = "0" + Convert.ToString(godziny) + ":" + Convert.ToString(minuty) + ":0" + Convert.ToString(sekundy);
                        text_minutes = Convert.ToString(tylkominuty) + ":0" + Convert.ToString(sekundy);
                    }
                }
                else {
                    if (sekundy > 9) {
                        text = "0" + Convert.ToString(godziny) + ":0" + Convert.ToString(minuty) + ":" + Convert.ToString(sekundy);
                        if (tylkominuty > 59) {
                            text_minutes = Convert.ToString(tylkominuty) + ":" + Convert.ToString(sekundy);
                        }
                        else {
                            text_minutes = "0" + Convert.ToString(tylkominuty) + ":" + Convert.ToString(sekundy);
                        }
                    }
                    else {
                        text = "0" + Convert.ToString(godziny) + ":0" + Convert.ToString(minuty) + ":0" + Convert.ToString(sekundy);
                        if (tylkominuty > 59) {
                            text_minutes = Convert.ToString(tylkominuty) + ":0" + Convert.ToString(sekundy);
                        }
                        else {
                            text_minutes = "0" + Convert.ToString(tylkominuty) + ":0" + Convert.ToString(sekundy);
                        }
                    }
                }
            }
            #endregion

            if (button == 1) {
                CalculatedTime.Text = text;
                CalculatedTimeMinutes.Text = text_minutes;
            }
            else {
                MemorizedTime.Text = text;
            }
        }

        private void CopyHHMMSS_Click(object sender, EventArgs e) {
            Clipboard.SetText(CalculatedTime.Text);
        }

        private void CopyMMSS_Click(object sender, EventArgs e) {
            Clipboard.SetText(CalculatedTimeMinutes.Text);
        }

        private void CopyMemory_Click(object sender, EventArgs e) {
            Clipboard.SetText(MemorizedTime.Text);
        }

        private void ClearAll_Click(object sender, EventArgs e) {
            minuta1.Text = "0";
            minuta2.Text = "0";
            minuta3.Text = "0";
            minuta4.Text = "0";
            minuta5.Text = "0";
            minuta6.Text = "0";
            minuta7.Text = "0";
            minuta8.Text = "0";
            minuta9.Text = "0";
            minuta10.Text = "0";
            minuta11.Text = "0";
            minuta12.Text = "0";
            minuta13.Text = "0";
            minuta14.Text = "0";
            minuta15.Text = "0";
            minuta16.Text = "0";
            minuta17.Text = "0";
            minuta18.Text = "0";
            minuta19.Text = "0";
            minuta20.Text = "0";

            sekunda1.Text = "0";
            sekunda2.Text = "0";
            sekunda3.Text = "0";
            sekunda4.Text = "0";
            sekunda5.Text = "0";
            sekunda6.Text = "0";
            sekunda7.Text = "0";
            sekunda8.Text = "0";
            sekunda9.Text = "0";
            sekunda10.Text = "0";
            sekunda11.Text = "0";
            sekunda12.Text = "0";
            sekunda13.Text = "0";
            sekunda14.Text = "0";
            sekunda15.Text = "0";
            sekunda16.Text = "0";
            sekunda17.Text = "0";
            sekunda18.Text = "0";
            sekunda19.Text = "0";
            sekunda20.Text = "0";
        }
    }
}