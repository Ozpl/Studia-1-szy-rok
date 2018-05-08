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


namespace RPManagerCharacterCreation {
    public partial class Form1 : Form {

        List<NPC> ListaNPC = new List<NPC> { };

        public string sciezkaNPC_XML = @"C:\Users\Ozpl\Desktop\RPManager\NPC.xml";



        public Form1() {
            InitializeComponent();
            WczytajListeNPC(sciezkaNPC_XML);
        }

        [Serializable()]
        public class NPC {
            #region NPC Statystyki
            public string Imie { get; set; }
            public string Rasa { get; set; }
            public string ObecnaProfesja { get; set; }
            public string PoprzedniaProfesja { get; set; }
            #endregion
            public NPC() { }

            public NPC(string imie = "Brak imienia",
                string rasa = "Brak rasy",
                string obecnaProfesja = "Brak obecnej profesji",
                string poprzedniaProfesja = "Brak poprzedniej profesji") {
                Imie = imie; Rasa = rasa; ObecnaProfesja = obecnaProfesja; PoprzedniaProfesja = poprzedniaProfesja;
            }
        }

        private void zapiszButton_Click(object sender, EventArgs e) {
            ZapiszListeNPC(sciezkaNPC_XML);
            ZaktualizujWyborNPC(wyborNPCComboBox.SelectedIndex);
        }

        public void ZapiszListeNPC(string sciezka) {
            var ten = ListaNPC[wyborNPCComboBox.SelectedIndex];
            ten.Imie = imieTextBox.Text;
            ten.Rasa = rasaTextBox.Text;
            ten.ObecnaProfesja = obecnaProfesjaTextBox.Text;
            ten.PoprzedniaProfesja = poprzedniaProfesjaTextBox.Text;

            using (Stream fs = new FileStream(sciezka, FileMode.Create, FileAccess.Write, FileShare.None)) {
                XmlSerializer serializer2 = new XmlSerializer(typeof(List<NPC>));
                serializer2.Serialize(fs, ListaNPC);
                fs.Close();
            }
        }

        public void WczytajListeNPC(string sciezka) {
            XmlSerializer serializer3 = new XmlSerializer(typeof(List<NPC>));

            using (FileStream fs2 = File.OpenRead(sciezka)) {
                ListaNPC = (List<NPC>)serializer3.Deserialize(fs2);
                fs2.Close();
            }

            ZaktualizujWyborNPC(0);
        }

        public void ZaktualizujWyborNPC(int obecnaPozycjaListy) {
            wyborNPCComboBox.Items.Clear();
            for (int i = 0; i < ListaNPC.Count; i++) {
                try {
                    wyborNPCComboBox.Items.Add(ListaNPC[i].Imie);
                }
                catch (Exception) {
                    ListaNPC[i].Imie = "temp_name";
                    wyborNPCComboBox.Items.Add(ListaNPC[i].Imie);
                }
            }
            wyborNPCComboBox.SelectedIndex = obecnaPozycjaListy;
        }

        private void wyborNPCComboBox_SelectedIndexChanged(object sender, EventArgs e) {
            var ten = ListaNPC[wyborNPCComboBox.SelectedIndex];

            opisPostaciLabel.Text = "Imię: " + ten.Imie +
                "\nRasa: " + ten.Rasa +
                "\nObecna profesja: " + ten.ObecnaProfesja +
                "\nPoprzednia profesja: " + ten.PoprzedniaProfesja;

            imieTextBox.Text = ten.Imie;
            rasaTextBox.Text = ten.Rasa;
            obecnaProfesjaTextBox.Text = ten.ObecnaProfesja;
            poprzedniaProfesjaTextBox.Text = ten.PoprzedniaProfesja;
        }

        private void dodajNPCButton_Click(object sender, EventArgs e) {
            ListaNPC.Add(new NPC());
            int obecnyIndex = ListaNPC.Count - 1;
            wyborNPCComboBox.Items.Add("temp");
            wyborNPCComboBox.SelectedIndex = obecnyIndex;
            ZapiszListeNPC(sciezkaNPC_XML);
            ZaktualizujWyborNPC(obecnyIndex);
        }

        private void usunNPCButton_Click(object sender, EventArgs e) {
            ListaNPC.RemoveAt(wyborNPCComboBox.SelectedIndex);
            ZaktualizujWyborNPC(wyborNPCComboBox.SelectedIndex - 1);
            ZapiszListeNPC(sciezkaNPC_XML);
        }



        //Stary kod - może się przydać
        /*
        NPC axel = new NPC();
            axel.Imie = imieTextBox.Text;

            XmlSerializer serializer = new XmlSerializer(typeof(NPC));
            using (TextWriter tw = new StreamWriter(sciezkaNPC_XML)) {
                serializer.Serialize(tw, axel);
                tw.Close();
            }
            axel = null;

            XmlSerializer dsr = new XmlSerializer(typeof(NPC));

            TextReader rd = new StreamReader(sciezkaNPC_XML);
            object obj = dsr.Deserialize(rd);

            axel = (NPC)obj;
            testLabel.Text = axel.Imie;
            rd.Close();
            -----------
        **/
    }
}