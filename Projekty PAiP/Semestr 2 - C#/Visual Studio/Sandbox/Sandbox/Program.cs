using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sandbox {
    class Program {
        static void Main(string[] args) {
            ///Zadanie 1
            int m = 0, n = 0;
            float x = 0;
            Console.WriteLine("Podaj rozmiar m = ");
            m = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Podaj rozmiar n = ");
            n = Convert.ToInt16(Console.ReadLine());

            int[,] tab = new int[m,n];
            WypelnijTablice2DIntLosowymiWartosciami(tab);
            WyswietlTablice2DInt(tab);

            x = Policz(tab);

            Console.WriteLine();
            Console.Write("Nasza roznica jest rowna = {0}",x);
            Console.WriteLine();

            ///Zadanie 2
            double[,] silnia = new double[3, 3];

            silnia = TablicaSilni();
            WyswietlTablice2DDouble(silnia);

            ///Zadanie 3
            int rozmiar, pierwszyindeks, drugiindeks;
            Console.WriteLine();
            Console.WriteLine("Podaj rozmiar tablicy 1D = ");
            rozmiar = Convert.ToInt16(Console.ReadLine());

            int[] tab1d = new int[rozmiar];
            WypelnijTablice1DLosowymiWartosciami(tab1d);
            WyswietlTablice1D(tab1d);
            
            Console.WriteLine();
            Console.WriteLine("Podaj pierwszy indeks elementu ktory zamienisz (1 - 10) = ");
            pierwszyindeks = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("Podaj drugi indeks elementu ktory zamienisz (1 - 10) = ");
            drugiindeks = Convert.ToInt16(Console.ReadLine());

            ZamienDwaElementyWTablicy1D(tab1d,pierwszyindeks,drugiindeks);

            Console.WriteLine();
            WyswietlTablice1D(tab1d);

            return;
        }

        static void WypelnijTablice2DIntLosowymiWartosciami(int[,] tab) {
            int i, j;
            Random los = new Random();

            for (i = 0; i < tab.GetLength(0); i++) {
                for (j = 0; j < tab.GetLength(1); j++) {
                    tab[i, j] = los.Next(1,10);
                }
            }
            return;
        }

        static void WyswietlTablice2DInt(int[,] tab) {
            int i, j;
            for (i = 0; i < tab.GetLength(0); i++) {
                for (j = 0; j < tab.GetLength(1); j++) {
                    Console.Write("{0}\t",tab[i,j]);
                }
                Console.WriteLine();
            }
            return;
        }

        static void WyswietlTablice2DDouble(double[,] tab) {
            int i, j;
            for (i = 0; i < tab.GetLength(0); i++) {
                for (j = 0; j < tab.GetLength(1); j++) {
                    Console.Write("{0}\t", tab[i, j]);
                }
                Console.WriteLine();
            }
            return;
        }

        static float Policz(int[,] tab) {
            int i, j;
            float srednia = 0, maks = tab[0,0], x = 0;
            for (i = 0; i < tab.GetLength(0); i++) {
                for (j = 0; j < tab.GetLength(1); j++) {
                    if (tab[i,j] > maks) {
                        maks = tab[i, j];
                    }
                    srednia += tab[i, j];
                }
            }
            Console.WriteLine();
            Console.WriteLine("Srednia przed podzieleniem = {0}", srednia);
            srednia = srednia / (tab.GetLength(0) * tab.GetLength(1));
            x = srednia - maks;
            Console.WriteLine("Srednia = {0}", srednia);
            Console.WriteLine("Maks = {0}", maks);
            return x;
        }

        static double[,] TablicaSilni() {
            double[,] tab = new double[3,3];
            double silnia = 1, dodajjeden = 1;
            int i, j;
            for (i = 0; i < tab.GetLength(0); i++) {
                for (j = 0; j < tab.GetLength(1); j++) {
                    tab[i, j] = silnia;
                    dodajjeden++;
                    silnia *= dodajjeden;
                }
            }
            return tab;
        }

        static void WypelnijTablice1DLosowymiWartosciami (int[] tab) {
            int i;
            Random los = new Random();
            for (i = 0; i < tab.GetLength(0); i++) {
                tab[i] = los.Next(1, 10);
            }
            return;
        }

        static void WyswietlTablice1D (int[] tab) {
            int i;
            for (i = 0; i < tab.GetLength(0); i++) {
                Console.Write("{0}, ", tab[i]);
            }
            return;
        }

        static void ZamienDwaElementyWTablicy1D(int[] tab, int x, int y) {
            int temp = 0;
            temp = tab[x - 1];
            tab[x - 1] = tab[y - 1];
            tab[y - 1] = temp;
            return;
        }
    }
}
