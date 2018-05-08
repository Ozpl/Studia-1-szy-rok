using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml;
using System.Xml.Serialization;

namespace Sandbox {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }

        public class NPC {
            public string imie;
        }

        private void zapiszButton_Click(object sender, EventArgs e) {
            string sciezkaNPC_XML = @"C:\Users\Ozpl\Desktop\RPManager\NPC.xml";
            /*
            try {
                testLabel.Text = "";
                var b = new NPC { imie = imieTextBox.Text };
                var writer = new XmlSerializer(typeof(NPC));
                var wfile = new StreamWriter(sciezkaNPC_XML + " " + imieTextBox.Text);
                writer.Serialize(wfile, b);

                XmlSerializer reader = new XmlSerializer(typeof(NPC));
                StreamReader file = new StreamReader(sciezkaNPC_XML);
                NPC overview = (NPC)reader.Deserialize(file);
                wfile.Close();
                file.Close();

                testLabel.Text = overview.imie;
            } catch (Exception) {
                testLabel.Text = "Wpisz wszystkie dane!!!";
            }
            **/
            NPC axel = new NPC();
            axel.imie = imieTextBox.Text;

            XmlSerializer sr = new XmlSerializer(typeof(NPC));
            using (TextWriter tw = new StreamWriter(sciezkaNPC_XML)) {
                sr.Serialize(tw, axel);
                tw.Close();
            }
            axel = null;

            XmlSerializer dsr = new XmlSerializer(typeof(NPC));

            TextReader rd = new StreamReader(sciezkaNPC_XML);
            object obj = dsr.Deserialize(rd);

            axel = (NPC)obj;
            testLabel.Text = axel.imie;
            rd.Close();
        }
    }
}
