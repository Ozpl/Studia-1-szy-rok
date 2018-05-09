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
    public partial class RPCharacterCreation : Form {

        List<NPC> ListaNPC = new List<NPC> { };
        List<NPC> ListaSzablonow = new List<NPC> { };

        public string sciezkaNPC_XML = @"C:\Users\Ozpl\Desktop\RPManager\NPC.xml";
        public string sciezkaNPC_XML_kopia = @"C:\Users\Ozpl\Desktop\RPManager\NPC_kopia.xml";
        public string sciezkaNPC_XML_szablony = @"C:\Users\Ozpl\Desktop\RPManager\NPC_szablony.xml";
        public string sciezkaNPC_XML_szablony_kopia = @"C:\Users\Ozpl\Desktop\RPManager\NPC_szablony_kopia.xml";

        public RPCharacterCreation() {
            InitializeComponent();
            WczytajListeSzablonow(sciezkaNPC_XML_szablony);
            WczytajListeNPC(sciezkaNPC_XML);
            //WczytajListeNPC(sciezkaNPC_XML_kopia);
            //WczytajListeSzablonow(sciezkaNPC_XML_kopia);
            NapiszWTestLabelNadCzymPracujesz(ListaNPC, wyborNPCComboBox);
        }

        [Serializable()]
        public class NPC {
            public string Imie { get; set; }
            public string Rasa { get; set; }
            public string ObecnaProfesja { get; set; }
            public string PoprzedniaProfesja { get; set; }
            public string Plec { get; set; }
            public string KolorOczu { get; set; }
            public string KolorWlosow { get; set; }
            public string ZnakGwiezdny { get; set; }
            public string Rodzenstwo { get; set; }
            public string MiejsceUrodzenia { get; set; }
            public string ZnakiSzczegolne { get; set; }
            public int Wiek { get; set; }
            public int Waga { get; set; }
            public int Wzrost { get; set; }
            public int PDObecne { get; set; }
            public int PDRazem { get; set; }
            public string WWPocz { get; set; }
            public string WWSch { get; set; }
            public int WWAkt { get; set; }
            public string USPocz { get; set; }
            public string USSch { get; set; }
            public int USAkt { get; set; }
            public string KPocz { get; set; }
            public string KSch { get; set; }
            public int KAkt { get; set; }
            public string ODPPocz { get; set; }
            public string ODPSch { get; set; }
            public int ODPAkt { get; set; }
            public string ZRPocz { get; set; }
            public string ZRSch { get; set; }
            public int ZRAkt { get; set; }
            public string INTPocz { get; set; }
            public string INTSch { get; set; }
            public int INTAkt { get; set; }
            public string SWPocz { get; set; }
            public string SWSch { get; set; }
            public int SWAkt { get; set; }
            public string OGDPocz { get; set; }
            public string OGDSch { get; set; }
            public int OGDAkt { get; set; }
            public string APocz { get; set; }
            public string ASch { get; set; }
            public int AAkt { get; set; }
            public string ZYWPocz { get; set; }
            public string ZYWSch { get; set; }
            public int ZYWAkt { get; set; }
            public string SPocz { get; set; }
            public string SSch { get; set; }
            public int SAkt { get; set; }
            public string WTPocz { get; set; }
            public string WTSch { get; set; }
            public int WTAkt { get; set; }
            public string SZPocz { get; set; }
            public string SZSch { get; set; }
            public int SZAkt { get; set; }
            public string MAGPocz { get; set; }
            public string MAGSch { get; set; }
            public int MAGAkt { get; set; }
            public string POPocz { get; set; }
            public string POSch { get; set; }
            public int POAkt { get; set; }
            public string PPPocz { get; set; }
            public string PPSch { get; set; }
            public int PPAkt { get; set; }
            public int PancerzGlowa { get; set; }
            public int PancerzKorpus { get; set; }
            public int PancerzLewaReka { get; set; }
            public int PancerzPrawaReka { get; set; }
            public int PancerzLewaNoga { get; set; }
            public int PancerzPrawaNoga { get; set; }
            public int PieniadzeZloto { get; set; }
            public int PieniadzeSrebro { get; set; }
            public int PieniadzeBraz { get; set; }

            public NPC() { }

            public NPC(string imie = "Brak imienia", string rasa = "Brak rasy", string obecnaProfesja = "Brak obecnej profesji", string poprzedniaProfesja = "Brak poprzedniej profesji",
                string plec = "Brak płci", string kolorOczu = "Brak koloru oczu", string kolorWlosow = "Brak koloru włosów", string znakGwiezdny = "Brak znaku gwiezdnego",
                string rodzenstwo = "Brak rodzeństwa", string miejsceUrodzenia = "Brak miejsca urodzenia", string znakiSzczegolne = "Brak znaków szczególnych",
                int wiek = 0, int waga = 0, int wzrost = 0, int pdObecne = 0, int pdRazem = 0, string wwPocz = "0", string wwSch = "+0", int wwAkt = 0,
                string usPocz = "0", string usSch = "+0", int usAkt = 0, string kPocz = "0", string kSch = "+0", int kAkt = 0, string odpPocz = "0", string odpSch = "+0",
                int odpAkt = 0, string zrPocz = "0", string zrSch = "+0", int zrAkt = 0, string intPocz = "0", string intSch = "+0", int intAkt = 0, string swPocz = "0",
                string swSch = "+0", int swAkt = 0, string ogdPocz = "0", string ogdSch = "+0", int ogdAkt = 0, string aPocz = "0", string aSch = "+0", int aAkt = 0,
                string zywPocz = "0", string zywSch = "+0", int zywAkt = 0, string sPocz = "0", string sSch = "+0", int sAkt = 0, string wtPocz = "0", string wtSch = "+0",
                int wtAkt = 0, string szPocz = "0", string szSch = "+0", int szAkt = 0, string magPocz = "0", string magSch = "+0", int magAkt = 0, string poPocz = "0",
                string poSch = "+0", int poAkt = 0, string ppPocz = "0", string ppSch = "+0", int ppAkt = 0, int pancerzGlowa = 0, int pancerzKorpus = 0, int pancerzLewaReka = 0,
                int pancerzPrawaReka = 0, int pancerzLewaNoga = 0, int pancerzPrawaNoga = 0, int pieniadzeZloto = 0, int pieniadzeSrebro = 0, int pieniadzeBraz = 0) {
                Imie = imie; Rasa = rasa; ObecnaProfesja = obecnaProfesja; PoprzedniaProfesja = poprzedniaProfesja; Plec = plec; KolorOczu = kolorOczu; KolorWlosow = kolorWlosow;
                ZnakGwiezdny = znakGwiezdny; Rodzenstwo = rodzenstwo; MiejsceUrodzenia = miejsceUrodzenia; ZnakiSzczegolne = znakiSzczegolne; Wiek = wiek; Waga = waga; Wzrost = wzrost;
                PDObecne = pdObecne; PDRazem = pdRazem; WWPocz = wwPocz; WWSch = wwSch; WWAkt = wwAkt; USPocz = usPocz; USSch = usSch; USAkt = usAkt; KPocz = kPocz; KSch = kSch; KAkt = kAkt;
                ODPPocz = odpPocz; ODPSch = odpSch; ODPAkt = odpAkt; ZRPocz = zrPocz; ZRSch = zrSch; ZRAkt = zrAkt; INTPocz = intPocz; INTSch = intSch; INTAkt = intAkt;
                SWPocz = swPocz; SWSch = swSch; SWAkt = swAkt; OGDPocz = ogdPocz; OGDSch = ogdSch; OGDAkt = ogdAkt; APocz = aPocz; ASch = aSch; AAkt = aAkt;
                ZYWPocz = zywPocz; ZYWSch = zywSch; ZYWAkt = zywAkt; SPocz = sPocz; SSch = sSch; SAkt = sAkt; WTPocz = wtPocz; WTSch = wtSch; WTAkt = wtAkt; SZPocz = szPocz; SZSch = szSch;
                SZAkt = szAkt; MAGPocz = magPocz; MAGSch = magSch; MAGAkt = magAkt; POPocz = poPocz; POSch = poSch; POAkt = poAkt; PPPocz = ppPocz; PPSch = ppSch; PPAkt = ppAkt;
                PancerzGlowa = pancerzGlowa; PancerzKorpus = pancerzKorpus; PancerzLewaReka = pancerzLewaReka; PancerzPrawaReka = pancerzPrawaReka;
                PancerzLewaNoga = pancerzLewaNoga; PancerzPrawaNoga = pancerzPrawaNoga; PieniadzeZloto = pieniadzeZloto; PieniadzeSrebro = pieniadzeSrebro;
                PieniadzeBraz = pieniadzeBraz;
            }
        }

        public class Bron {
            public string Nazwa { get; set; }
            public string Cena { get; set; }
            public string Obciazenie { get; set; }
            public string Kategoria { get; set; }
            public string SilaBroni { get; set; }
            public string Zasieg { get; set; }
            public string Przeladowanie { get; set; }
            public string CechyOreza { get; set; }
            public string Dostepnosc { get; set; }

            public Bron() { }

            public Bron(string nazwa = "Brak nazwy", string cena = "Brak ceny", string obciazenie = "Brak obciążenia", string kategoria = "Brak kategorii", string silaBroni = "Brak siły broni",
                string zasieg = "Brak zasięgu", string przeladowanie = "Brak przeładowania", string cechyOreza = "Brak cech oręża", string dostepnosc = "Brak dostępności") {
                Nazwa = nazwa; Cena = cena; Obciazenie = obciazenie; Kategoria = kategoria; SilaBroni = silaBroni; Zasieg = zasieg; Przeladowanie = przeladowanie; CechyOreza = cechyOreza; Dostepnosc = dostepnosc;
            }
        }

        public class Opancerzenie {
            public string Nazwa { get; set; }
            public string Cena { get; set; }
            public string Obciazenie { get; set; }
            public string ChronioneLokacje { get; set; }
            public string Pancerz { get; set; }
            public string Dostepnosc { get; set; }

            public Opancerzenie() { }

            public Opancerzenie(string nazwa = "Brak nazwy", string cena = "Brak ceny", string obciazenie = "Brak obciążenia", string chronioneLokacje = "Brak chronionych lokacji",
                string pancerz = "Brak pancerza", string dostepnosc = "Brak dostępności") {
                Nazwa = nazwa; Cena = cena; Obciazenie = obciazenie; ChronioneLokacje = chronioneLokacje; Pancerz = pancerz; Dostepnosc = dostepnosc;
            }
        }

        public class Umiejetnosc {
            public string Nazwa { get; set; }
            public string Typ { get; set; }
            public string Cecha { get; set; }
            public string Opis { get; set; }
            public string ZdolnosciPokrewne { get; set; }

            public Umiejetnosc() { }

            public Umiejetnosc(string nazwa = "Brak nazwy", string typ = "Brak typu", string cecha = "Brak cechy", string opis = "Brak opisu", string zdolonosciPokrewne = "Brak zdolności pokrewnych") {
                Nazwa = nazwa; Typ = typ; Cecha = cecha; Opis = opis; ZdolnosciPokrewne = zdolonosciPokrewne;
            }
        }

        public class Zdolnosc {
            public string Nazwa { get; set; }
            public string Opis { get; set; }

            public Zdolnosc() { }

            public Zdolnosc(string nazwa = "Brak nazwy", string opis = "Brak opisu") {
                Nazwa = nazwa; Opis = opis;
            }
        }

        private void zapiszButton_Click(object sender, EventArgs e) {
            ZapiszListe(sciezkaNPC_XML, ListaNPC, wyborNPCComboBox);
            ZaktualizujWybor(wyborNPCComboBox.SelectedIndex, ListaNPC, wyborNPCComboBox);
        }

        public void ZapiszListe(string sciezka, List<NPC> lista, ComboBox combo) {
            if (lista[0].Imie == "") {
                using (Stream fs = new FileStream(sciezka, FileMode.Create, FileAccess.Write, FileShare.None)) {
                    XmlSerializer serializer2 = new XmlSerializer(typeof(List<NPC>));
                    serializer2.Serialize(fs, lista);
                    fs.Close();
                }
            }
            else {
                var ten = lista[combo.SelectedIndex];
                ten.Imie = imieTextBox.Text;
                ten.Rasa = rasaTextBox.Text;
                ten.ObecnaProfesja = obecnaProfesjaTextBox.Text;
                ten.PoprzedniaProfesja = poprzedniaProfesjaTextBox.Text;
                ten.Plec = plecTextBox.Text;
                ten.KolorOczu = kolorOczuTextBox.Text;
                ten.KolorWlosow = kolorWlosowTextBox.Text;
                ten.ZnakGwiezdny = znakGwiedznyTextBox.Text;
                ten.Rodzenstwo = rodzenstwoTextBox.Text;
                ten.MiejsceUrodzenia = miejsceUrodzeniaTextBox.Text;
                ten.ZnakiSzczegolne = znakiSzczegolneTextBox.Text;
                ten.Wiek = Convert.ToInt32(wiekTextBox.Text);
                ten.Waga = Convert.ToInt32(wagaTextBox.Text);
                ten.Wzrost = Convert.ToInt32(wzrostTextBox.Text);
                ten.PDObecne = Convert.ToInt32(pdObecneTextBox.Text);
                ten.PDRazem = Convert.ToInt32(pdRazemTextBox.Text);
                ten.WWPocz = wwPoczTextBox.Text;
                ten.WWSch = wwSchTextBox.Text;
                ten.WWAkt = Convert.ToInt32(wwAktUpDown.Value);
                ten.USPocz = usPoczTextBox.Text;
                ten.USSch = usSchTextBox.Text;
                ten.USAkt = Convert.ToInt32(usAktUpDown.Value);
                ten.KPocz = kPoczTextBox.Text;
                ten.KSch = kSchTextBox.Text;
                ten.KAkt = Convert.ToInt32(kAktUpDown.Value);
                ten.ODPPocz = odpPoczTextBox.Text;
                ten.ODPSch = odpSchTextBox.Text;
                ten.ODPAkt = Convert.ToInt32(odpAktUpDown.Value);
                ten.ZRPocz = zrPoczTextBox.Text;
                ten.ZRSch = zrSchTextBox.Text;
                ten.ZRAkt = Convert.ToInt32(zrAktUpDown.Value);
                ten.INTPocz = intPoczTextBox.Text;
                ten.INTSch = intSchTextBox.Text;
                ten.INTAkt = Convert.ToInt32(intAktUpDown.Value);
                ten.SWPocz = swPoczTextBox.Text;
                ten.SWSch = swSchTextBox.Text;
                ten.SWAkt = Convert.ToInt32(swAktUpDown.Value);
                ten.OGDPocz = ogdPoczTextBox.Text;
                ten.OGDSch = ogdSchTextBox.Text;
                ten.OGDAkt = Convert.ToInt32(ogdAktUpDown.Value);
                ten.APocz = aPoczTextBox.Text;
                ten.ASch = aSchTextBox.Text;
                ten.AAkt = Convert.ToInt32(aAktUpDown.Value);
                ten.ZYWPocz = zywPoczTextBox.Text;
                ten.ZYWSch = zywSchTextBox.Text;
                ten.ZYWAkt = Convert.ToInt32(zywAktUpDown.Value);
                ten.SPocz = sPoczTextBox.Text;
                ten.SSch = sSchTextBox.Text;
                ten.SAkt = Convert.ToInt32(sAktUpDown.Value);
                ten.WTPocz = wtPoczTextBox.Text;
                ten.WTSch = wtSchTextBox.Text;
                ten.WTAkt = Convert.ToInt32(wtAktUpDown.Value);
                ten.SZPocz = szPoczTextBox.Text;
                ten.SZSch = szSchTextBox.Text;
                ten.SZAkt = Convert.ToInt32(szAktUpDown.Value);
                ten.MAGPocz = magPoczTextBox.Text;
                ten.MAGSch = magSchTextBox.Text;
                ten.MAGAkt = Convert.ToInt32(magAktUpDown.Value);
                ten.POPocz = poPoczTextBox.Text;
                ten.POSch = poSchTextBox.Text;
                ten.POAkt = Convert.ToInt32(poAktUpDown.Value);
                ten.PPPocz = ppPoczTextBox.Text;
                ten.PPSch = ppSchTextBox.Text;
                ten.PPAkt = Convert.ToInt32(ppAktUpDown.Value);
                ten.PancerzGlowa = Convert.ToInt32(pancerzGlowaUpDown.Value);
                ten.PancerzKorpus = Convert.ToInt32(pancerzKorpusUpDown.Value);
                ten.PancerzLewaReka = Convert.ToInt32(pancerzLewaRekaUpDown.Value);
                ten.PancerzPrawaReka = Convert.ToInt32(pancerzPrawaRekaUpDown.Value);
                ten.PancerzLewaNoga = Convert.ToInt32(pancerzLewaNogaUpDown.Value);
                ten.PancerzPrawaNoga = Convert.ToInt32(pancerzPrawaNogaUpDown.Value);
                ten.PieniadzeZloto = Convert.ToInt32(pieniadzeZlotoUpDown.Value);
                ten.PieniadzeSrebro = Convert.ToInt32(pieniadzeSrebroUpDown.Value);
                ten.PieniadzeBraz = Convert.ToInt32(pieniadzeBrazUpDown.Value);

                using (Stream fs = new FileStream(sciezka, FileMode.Create, FileAccess.Write, FileShare.None)) {
                    XmlSerializer serializer2 = new XmlSerializer(typeof(List<NPC>));
                    serializer2.Serialize(fs, lista);
                    fs.Close();
                }
            }
        }

        public void WczytajListeNPC(string sciezka) {
            XmlSerializer serializer3 = new XmlSerializer(typeof(List<NPC>));

            using (FileStream fs2 = File.OpenRead(sciezka)) {
                ListaNPC = (List<NPC>)serializer3.Deserialize(fs2);
                fs2.Close();
            }

            if (ListaNPC == null) {
                ListaNPC.Add(new NPC());
            }

            ZaktualizujWybor(0, ListaNPC, wyborNPCComboBox);
        }


        public void WczytajListeSzablonow(string sciezka) {
            XmlSerializer serializer3 = new XmlSerializer(typeof(List<NPC>));

            using (FileStream fs2 = File.OpenRead(sciezka)) {
                ListaSzablonow = (List<NPC>)serializer3.Deserialize(fs2);
                fs2.Close();
            }

            if (ListaSzablonow == null) {
                ListaSzablonow.Add(new NPC());
            }

            ZaktualizujWybor(0, ListaSzablonow, szablonyComboBox);
        }

        public void ZaktualizujWybor(int obecnaPozycjaListy, List<NPC> lista, ComboBox combo) {
            if (lista.Count != 0) {
                combo.Items.Clear();
                for (int i = 0; i < lista.Count; i++) {
                    try {
                        combo.Items.Add(lista[i].Imie);
                    }
                    catch (Exception) {
                        lista[i].Imie = "temp_name";
                        combo.Items.Add(lista[i].Imie);
                    }
                }
                if (obecnaPozycjaListy < 0 || obecnaPozycjaListy > lista.Count - 1) {
                    obecnaPozycjaListy = 0;
                }
                combo.SelectedIndex = obecnaPozycjaListy;
            }
            else {
                lista.Add(new NPC());
            }
        }

        public void WypelnijTextBoxyWartosciamiWybranegoNPC(int obecnaPozycjaListy, List<NPC> lista, ComboBox combo) {
            var ten = lista[obecnaPozycjaListy];

            imieTextBox.Text = ten.Imie;
            rasaTextBox.Text = ten.Rasa;
            obecnaProfesjaTextBox.Text = ten.ObecnaProfesja;
            poprzedniaProfesjaTextBox.Text = ten.PoprzedniaProfesja;
            plecTextBox.Text = ten.Plec;
            kolorOczuTextBox.Text = ten.KolorOczu;
            kolorWlosowTextBox.Text = ten.KolorWlosow;
            znakGwiedznyTextBox.Text = ten.ZnakGwiezdny;
            rodzenstwoTextBox.Text = ten.Rodzenstwo;
            miejsceUrodzeniaTextBox.Text = ten.MiejsceUrodzenia;
            znakiSzczegolneTextBox.Text = ten.ZnakiSzczegolne;
            wiekTextBox.Text = Convert.ToString(ten.Wiek);
            wagaTextBox.Text = Convert.ToString(ten.Waga);
            wzrostTextBox.Text = Convert.ToString(ten.Wzrost);
            pdObecneTextBox.Text = Convert.ToString(ten.PDObecne);
            pdRazemTextBox.Text = Convert.ToString(ten.PDRazem);
            wwPoczTextBox.Text = ten.WWPocz;
            wwSchTextBox.Text = ten.WWSch;
            wwAktUpDown.Value = ten.WWAkt;
            usPoczTextBox.Text = ten.USPocz;
            usSchTextBox.Text = ten.USSch;
            usAktUpDown.Value = ten.USAkt;
            kPoczTextBox.Text = ten.KPocz;
            kSchTextBox.Text = ten.KSch;
            kAktUpDown.Value = ten.KAkt;
            odpPoczTextBox.Text = ten.ODPPocz;
            odpSchTextBox.Text = ten.ODPSch;
            odpAktUpDown.Value = ten.ODPAkt;
            zrPoczTextBox.Text = ten.ZRPocz;
            zrSchTextBox.Text = ten.ZRSch;
            zrAktUpDown.Value = ten.ZRAkt;
            intPoczTextBox.Text = ten.INTPocz;
            intSchTextBox.Text = ten.INTSch;
            intAktUpDown.Value = ten.INTAkt;
            swPoczTextBox.Text = ten.SWPocz;
            swSchTextBox.Text = ten.SWSch;
            swAktUpDown.Value = ten.SWAkt;
            ogdPoczTextBox.Text = ten.OGDPocz;
            ogdSchTextBox.Text = ten.OGDSch;
            ogdAktUpDown.Value = ten.OGDAkt;
            aPoczTextBox.Text = ten.APocz;
            aSchTextBox.Text = ten.ASch;
            aAktUpDown.Value = ten.AAkt;
            zywPoczTextBox.Text = ten.ZYWPocz;
            zywSchTextBox.Text = ten.ZYWSch;
            zywAktUpDown.Value = ten.ZYWAkt;
            sPoczTextBox.Text = ten.SPocz;
            sSchTextBox.Text = ten.SSch;
            sAktUpDown.Value = ten.SAkt;
            wtPoczTextBox.Text = ten.WTPocz;
            wtSchTextBox.Text = ten.WTSch;
            wtAktUpDown.Value = ten.WTAkt;
            szPoczTextBox.Text = ten.SZPocz;
            szSchTextBox.Text = ten.SZSch;
            szAktUpDown.Value = ten.SZAkt;
            magPoczTextBox.Text = ten.MAGPocz;
            magSchTextBox.Text = ten.MAGSch;
            magAktUpDown.Value = ten.MAGAkt;
            poPoczTextBox.Text = ten.POPocz;
            poSchTextBox.Text = ten.POSch;
            poAktUpDown.Value = ten.POAkt;
            ppPoczTextBox.Text = ten.PPPocz;
            ppSchTextBox.Text = ten.PPSch;
            ppAktUpDown.Value = ten.PPAkt;
            pancerzGlowaUpDown.Value = ten.PancerzGlowa;
            pancerzKorpusUpDown.Value = ten.PancerzKorpus;
            pancerzLewaRekaUpDown.Value = ten.PancerzLewaReka;
            pancerzPrawaRekaUpDown.Value = ten.PancerzPrawaReka;
            pancerzLewaNogaUpDown.Value = ten.PancerzLewaNoga;
            pancerzPrawaNogaUpDown.Value = ten.PancerzPrawaNoga;
            pieniadzeZlotoUpDown.Value = ten.PieniadzeZloto;
            pieniadzeSrebroUpDown.Value = ten.PieniadzeSrebro;
            pieniadzeBrazUpDown.Value = ten.PieniadzeBraz;
        }

        public void DodajNPCDoWybranejListy(int obecnaPozycjaListy, List<NPC> lista, ComboBox combo, string sciezka) {
            lista.Add(new NPC());
            combo.Items.Add("temp");
            combo.SelectedIndex = obecnaPozycjaListy;
            ZapiszListe(sciezka, lista, combo);
            ZaktualizujWybor(obecnaPozycjaListy, lista, combo);
        }

        private void wyborNPCComboBox_SelectedIndexChanged(object sender, EventArgs e) {
            WypelnijTextBoxyWartosciamiWybranegoNPC(wyborNPCComboBox.SelectedIndex, ListaNPC, wyborNPCComboBox);
            NapiszWTestLabelNadCzymPracujesz(ListaNPC, wyborNPCComboBox);
        }

        private void dodajNPCButton_Click(object sender, EventArgs e) {
            DodajNPCDoWybranejListy(ListaNPC.Count, ListaNPC, wyborNPCComboBox, sciezkaNPC_XML);
        }

        private void usunNPCButton_Click(object sender, EventArgs e) {
            ListaNPC.RemoveAt(wyborNPCComboBox.SelectedIndex);
            ZaktualizujWybor(wyborNPCComboBox.SelectedIndex - 1, ListaNPC, wyborNPCComboBox);
            ZapiszListe(sciezkaNPC_XML, ListaNPC, wyborNPCComboBox);
        }

        private void kopiaButton_Click(object sender, EventArgs e) {
            ZapiszListe(sciezkaNPC_XML_kopia, ListaNPC, wyborNPCComboBox);
        }

        private void kopiaWczytajButton_Click(object sender, EventArgs e) {
            WczytajListeNPC(sciezkaNPC_XML_kopia);
        }

        private void skopiujObecnegoNPCButton_Click(object sender, EventArgs e) {
            /*
            ListaNPC.Add(new NPC());
            int i = ListaNPC.Count - 1;
            // MemberwiseClone do płytkiej kopii - jak zrobić??
            ListaNPC[i] = ListaNPC[wyborNPCComboBox.SelectedIndex];
            ZaktualizujWybor(wyborNPCComboBox.SelectedIndex, ListaNPC, wyborNPCComboBox);
            **/
        }

        private void dodajNowySzablonButton_Click(object sender, EventArgs e) {
            DodajNPCDoWybranejListy(ListaSzablonow.Count, ListaSzablonow, szablonyComboBox, sciezkaNPC_XML_szablony);
            ZapiszListe(sciezkaNPC_XML_szablony, ListaSzablonow, szablonyComboBox);
        }

        private void usunSzablonButton_Click(object sender, EventArgs e) {
            if (ListaSzablonow.Count == 1) {
                testLabel.Text = "Nie można usunąć ostatniego elementu \n(spróbuj go zmienić lub zostaw pusty)";
            }
            else {
                ListaSzablonow.RemoveAt(szablonyComboBox.SelectedIndex);
                ZaktualizujWybor(szablonyComboBox.SelectedIndex - 1, ListaSzablonow, szablonyComboBox);
                ZapiszListe(sciezkaNPC_XML_szablony, ListaSzablonow, szablonyComboBox);
            }
        }

        private void kopiaZapiszSzablonyButton_Click(object sender, EventArgs e) {
            ZapiszListe(sciezkaNPC_XML_szablony_kopia, ListaSzablonow, szablonyComboBox);
        }

        private void kopiaWczytajSzablonyButton_Click(object sender, EventArgs e) {
            WczytajListeSzablonow(sciezkaNPC_XML_szablony_kopia);
        }

        private void szablonyComboBox_SelectedIndexChanged(object sender, EventArgs e) {
            WypelnijTextBoxyWartosciamiWybranegoNPC(szablonyComboBox.SelectedIndex, ListaSzablonow, szablonyComboBox);
            NapiszWTestLabelNadCzymPracujesz(ListaSzablonow, szablonyComboBox);
        }

        private void szablonyZapiszButton_Click(object sender, EventArgs e) {
            ZapiszListe(sciezkaNPC_XML_szablony, ListaSzablonow, szablonyComboBox);
            ZaktualizujWybor(szablonyComboBox.SelectedIndex, ListaSzablonow, szablonyComboBox);
        }

        private void NapiszWTestLabelNadCzymPracujesz(List<NPC> lista, ComboBox combo) {
            string nazwalisty;
            if (lista == ListaNPC) {
                nazwalisty = "NPC";
            }
            else
                nazwalisty = "szablonów";

            if (lista[combo.SelectedIndex].Imie == "") {
                testLabel.Text = "Obecnie pracujesz nad NPC: (pusty) z listy " + nazwalisty;
            }
            else {
                testLabel.Text = "Obecnie pracujesz nad NPC: " + lista[combo.SelectedIndex].Imie + " z listy " + nazwalisty;
            }
        }

        public void PrzesunObecnyElementListyWGore(List<NPC> lista, ComboBox combo) {
            /*
            if (combo.SelectedIndex == 0) {
                testLabel.Text = "Nie można przesunąć w górę pierwszego elementu!";
            }
            else {
                var obecny = lista[combo.SelectedIndex];
                var tenwyzej = lista[combo.SelectedIndex - 1];
                NPC temp = obecny;
                obecny = tenwyzej;
                tenwyzej = temp;
                testLabel.Text = obecny.Imie + " " + temp.Imie + " " + tenwyzej.Imie;
                //ZapiszListe(sciezkaNPC_XML, ListaNPC,wyborNPCComboBox);
                //ZaktualizujWybor(combo.SelectedIndex, lista, combo);
            }
            **/
        }

        private void wGoreNPCButton_Click(object sender, EventArgs e) {
            PrzesunObecnyElementListyWGore(ListaNPC,wyborNPCComboBox);
        }

        private void sortowanieNPCButton_Click(object sender, EventArgs e) {
            ListaNPC.OrderBy(ListaNPC => ListaNPC.Imie).ToList();
            ZaktualizujWybor(wyborNPCComboBox.SelectedIndex,ListaNPC,wyborNPCComboBox);
        }



        /*
        //Stary kod - może się przydać
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