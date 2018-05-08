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

namespace RPManager {
    public partial class Form1 : Form {

        public string sciezkaZapisywania = @"C:\Users\Ozpl\Desktop\RPManager\Zapisane dane.txt";
        public string sciezkaNPC = @"C:\Users\Ozpl\Desktop\RPManager\NPC.txt";
        public string sciezkaNPCXML = @"C:\Users\Ozpl\Desktop\RPManager\NPC_XML.xml";
        public string sciezkaNPCXML_temp = @"C:\Users\Ozpl\Desktop\RPManager\Temp\NPC_XML.xml";

        public int liczbaZapisanychNPC = 0;

        public List<Form1> ListaNPC = new List<Form1>();

        public Form1() {
            InitializeComponent();
            //WczytajUstawieniaProgramu();
        }


        private void Button1_Click(object sender, EventArgs e) {
            NPC axel = new NPC {
                id = 0,
                wiek = 60,
                waga = 40,
                wzrost = 124,
                PDobecne = 290,
                PDrazem = 1200,
                WWpocz = 25,
                WWsch = 15,
                WWakt = 30,
                USpocz = 53,
                USsch = 15,
                USakt = 53,
                Kpocz = 22,
                Ksch = 5,
                Kakt = 27,
                ODPpocz = 21,
                ODPsch = 10,
                ODPakt = 21,
                ZRpocz = 53,
                ZRsch = 20,
                ZRakt = 63,
                INTpocz = 30,
                INTsch = 20,
                INTakt = 35,
                SWpocz = 29,
                SWsch = 35,
                SWakt = 39,
                OGDpocz = 41,
                OGDsch = 20,
                OGDakt = 46,
                Apocz = 1,
                Asch = 1,
                Aakt = 1,
                ZYWpocz = 10,
                ZYWsch = 4,
                ZYWakt = 12,
                Spocz = 2,
                Ssch = 0,
                Sakt = 2,
                WTpocz = 2,
                WTsch = 0,
                WTakt = 2,
                SZpocz = 4,
                SZsch = 0,
                SZakt = 4,
                MAGpocz = 0,
                MAGsch = 0,
                MAGakt = 0,
                POpocz = 0,
                POsch = 0,
                POakt = 1,
                PPpocz = 2,
                PPsch = 0,
                PPakt = 2,
                imie = "Axel Apfelbaum",
                rasa = "niziołek",
                obecnaProfesja = "szpieg",
                poprzedniaProfesja = "sługa",
                plec = "mężczyzna",
                kolorOczu = "orzechowy",
                kolorWlosow = "ciemny blond",
                znakGwiezdny = "Vobista Ulotny",
                rodzenstwo = "4 braci, 2 siostry",
                miejsceUrodzenia = "Hergig, Hochland",
                znakiSzczegolne = "znamię na nodze",
            };
            NPC grundi = new NPC {
                id = 1,
                wiek = 14,
                waga = 40,
                wzrost = 124,
                PDobecne = 290,
                PDrazem = 1200,
                WWpocz = 25,
                WWsch = 15,
                WWakt = 30,
                USpocz = 53,
                USsch = 15,
                USakt = 53,
                Kpocz = 22,
                Ksch = 5,
                Kakt = 27,
                ODPpocz = 21,
                ODPsch = 10,
                ODPakt = 21,
                ZRpocz = 53,
                ZRsch = 20,
                ZRakt = 63,
                INTpocz = 30,
                INTsch = 20,
                INTakt = 35,
                SWpocz = 29,
                SWsch = 35,
                SWakt = 39,
                OGDpocz = 41,
                OGDsch = 20,
                OGDakt = 46,
                Apocz = 1,
                Asch = 1,
                Aakt = 1,
                ZYWpocz = 10,
                ZYWsch = 4,
                ZYWakt = 12,
                Spocz = 2,
                Ssch = 0,
                Sakt = 2,
                WTpocz = 2,
                WTsch = 0,
                WTakt = 2,
                SZpocz = 4,
                SZsch = 0,
                SZakt = 4,
                MAGpocz = 0,
                MAGsch = 0,
                MAGakt = 0,
                POpocz = 0,
                POsch = 0,
                POakt = 1,
                PPpocz = 2,
                PPsch = 0,
                PPakt = 2,
                imie = "Grundi",
                rasa = "krasnolud",
                obecnaProfesja = "szpieg",
                poprzedniaProfesja = "sługa",
                plec = "mężczyzna",
                kolorOczu = "orzechowy",
                kolorWlosow = "ciemny blond",
                znakGwiezdny = "Vobista Ulotny",
                rodzenstwo = "4 braci, 2 siostry",
                miejsceUrodzenia = "Hergig, Hochland",
                znakiSzczegolne = "znamię na nodze",
            };
            NPC marmakar = new NPC { };

            List<NPC> npcc = new List<NPC>();
            List<NPC> npcc2 = new List<NPC>();
            npcc.Add(axel);
            npcc.Add(grundi);

            label1.Text = ZnajdzNPCIWypiszJegoStatystyke(axel, "imie");
            /*
            File.WriteAllText(sciezkaNPC, "Przechowywanie informacji o zapisanych NPC-tach\n\n---- ---- ---- ----\n");
            File.AppendAllText(sciezkaNPC, NPCdoPliku(axel));
            File.AppendAllText(sciezkaNPC, NPCdoPliku(grundi));
            **/


            XmlSerializer x = new XmlSerializer(axel.GetType());

            FileStream fs = new FileStream(sciezkaNPCXML, FileMode.Create, FileAccess.ReadWrite, FileShare.ReadWrite);
            FileStream fsapp = new FileStream(sciezkaNPCXML, FileMode.Append, FileAccess.Write, FileShare.ReadWrite);
            FileStream fsopen = new FileStream(sciezkaNPCXML, FileMode.Open, FileAccess.Read, FileShare.Read);
            
            try {
                for (int i = 0; i < npcc.Count(); i++) {
                    x.Serialize(fsapp, npcc[i]);
                }
            }
            catch (IOException) {
                Console.Write("Blad dostepu");
            }
            /*
            XmlSerializer reader = new XmlSerializer(typeof(NPC));
            NPC overview = (NPC)reader.Deserialize(file);
            Console.Write(overview.imie);
            **/
            // Jak wczytac zawartosc??
            //List<NPC> npcc3 = x.Deserialize(fsopen);

            //TextReader tr = new StreamReader(sciezkaNPCXML);
            //marmakar = (NPC)(x).Deserialize(tr);

            //Console.WriteLine("{0}", npcc3);

            PokazNPCNaListView();
        }
        [Serializable]
        public struct NPC {
            public int id, wiek, waga, wzrost, PDobecne, PDrazem, WWpocz, WWsch, WWakt, USpocz, USsch, USakt, Kpocz, Ksch, Kakt, ODPpocz, ODPsch, ODPakt, ZRpocz, ZRsch, ZRakt, INTpocz, INTsch, INTakt, SWpocz, SWsch, SWakt, OGDpocz, OGDsch, OGDakt, Apocz, Asch, Aakt, ZYWpocz, ZYWsch, ZYWakt, Spocz, Ssch, Sakt, WTpocz, WTsch, WTakt, SZpocz, SZsch, SZakt, MAGpocz, MAGsch, MAGakt, POpocz, POsch, POakt, PPpocz, PPsch, PPakt;
            public string imie, rasa, obecnaProfesja, poprzedniaProfesja, plec, kolorOczu, kolorWlosow, znakGwiezdny, rodzenstwo, miejsceUrodzenia, znakiSzczegolne;

            public NPC(int idp, int wi, int wg, int wz, int pdo, int pdr, int wwp, int wws, int wwa, int usp, int uss, int usa, int kp, int ks, int ka, int odpp, int odps, int odpa, int zrp, int zrs, int zra, int intp, int ints, int inta, int swp, int sws, int swa, int ogdp, int ogds, int ogda, int ap, int asch, int aa, int zywp, int zyws, int zywa, int sp, int ss, int sa, int wtp, int wts, int wta, int szp, int szs, int sza, int magp, int mags, int maga, int pop, int pos, int poa, int ppp, int pps, int ppa, string i, string r, string op, string pp, string pl, string ko, string kw, string zg, string rodz, string mu, string zs) {
                id = idp;
                wiek = wi;
                waga = wg;
                wzrost = wz;
                PDobecne = pdo;
                PDrazem = pdr;
                WWpocz = wwp;
                WWsch = wws;
                WWakt = wwa;
                USpocz = usp;
                USsch = uss;
                USakt = usa;
                Kpocz = kp;
                Ksch = ks;
                Kakt = ka;
                ODPpocz = odpp;
                ODPsch = odps;
                ODPakt = odpa;
                ZRpocz = zrp;
                ZRsch = zrs;
                ZRakt = zra;
                INTpocz = intp;
                INTsch = ints;
                INTakt = inta;
                SWpocz = swp;
                SWsch = sws;
                SWakt = swa;
                OGDpocz = ogdp;
                OGDsch = ogds;
                OGDakt = ogda;
                Apocz = ap;
                Asch = asch;
                Aakt = aa;
                ZYWpocz = zywp;
                ZYWsch = zyws;
                ZYWakt = zywa;
                Spocz = sp;
                Ssch = ss;
                Sakt = sa;
                WTpocz = wtp;
                WTsch = wts;
                WTakt = wta;
                SZpocz = szp;
                SZsch = szs;
                SZakt = sza;
                MAGpocz = magp;
                MAGsch = mags;
                MAGakt = maga;
                POpocz = pop;
                POsch = pos;
                POakt = poa;
                PPpocz = ppp;
                PPsch = pps;
                PPakt = ppa;
                imie = i;
                rasa = r;
                obecnaProfesja = op;
                poprzedniaProfesja = pp;
                plec = pl;
                kolorOczu = ko;
                kolorWlosow = kw;
                znakGwiezdny = zg;
                rodzenstwo = rodz;
                miejsceUrodzenia = mu;
                znakiSzczegolne = zs;
            }
        }

        public string NPCdoPliku(NPC loknpc) {
            string tekst = "NPC_ID: " + loknpc.id + ";\nImię: " + loknpc.imie + ";\nRasa: " + loknpc.rasa + ";" + "\n\n---- ---- ---- ----\n";
            return tekst;
        }

        public void ZapiszUstawieniaProgramu(object sender, EventArgs e) {
            liczbaZapisanychNPC = 0;
            foreach (var line in File.ReadAllLines(sciezkaNPC)) {
                if (line.Contains("NPC_ID: ")) {
                    liczbaZapisanychNPC++;
                }
            }
            File.WriteAllText(sciezkaZapisywania, "Liczba NPC: " + Convert.ToString(liczbaZapisanychNPC) + ";");
        }

        public void WczytajUstawieniaProgramu() {
            int i, j = 0;
            char[] temp = new char[100];
            foreach (var line in File.ReadAllLines(sciezkaZapisywania)) {
                if (line.Contains("Liczba NPC: ")) {
                    for (i = 11; i < line.Length; i++) {
                        temp[j] = line[i];
                        j++;
                        if (line.Equals(";")) {
                            break;
                        }
                    }
                }
            }
            liczbaZapisanychNPC = Convert.ToInt16(temp);
        }

        public string ZnajdzNPCIWypiszJegoStatystyke(NPC loknpc, string statystyka) {
            string znalezionaStatystyka = "imie";
            switch (statystyka) {
                case "imie": return znalezionaStatystyka = loknpc.imie;
                default: return "Nie znaleziono statystyki \"" + statystyka + "\" dla NPC o nazwie \"" + loknpc.imie + "\"";
            }
        }

        public void PokazNPCNaListView() {
            ListView lista = new ListView();
            ListViewItem przedmiot1 = new ListViewItem("przedmiot1", 0);
            przedmiot1.SubItems.Add("1");
            przedmiot1.SubItems.Add("2");
            przedmiot1.SubItems.Add("3");

            listView1.Items.AddRange(new ListViewItem[] { przedmiot1 });
        }

    }
}
