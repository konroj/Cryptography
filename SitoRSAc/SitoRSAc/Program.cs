using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace MiniAES_C_Sharp
{
    public class SBox{
        public void sbox1(int[] tab, int min, int[] box){
            if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 0) { box[0] = 1; box[1] = 1; box[2] = 1; box[3] = 0; }
            if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 1) { box[0] = 0; box[1] = 1; box[2] = 0; box[3] = 0; }
            if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 0) { box[0] = 1; box[1] = 1; box[2] = 0; box[3] = 1; }
            if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 1) { box[0] = 0; box[1] = 0; box[2] = 0; box[3] = 1; }
            if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 0) { box[0] = 0; box[1] = 0; box[2] = 1; box[3] = 0; }
            if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 1) { box[0] = 1; box[1] = 1; box[2] = 1; box[3] = 1; }
            if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 0) { box[0] = 1; box[1] = 0; box[2] = 1; box[3] = 1; }
            if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 1) { box[0] = 1; box[1] = 0; box[2] = 0; box[3] = 0; }
            if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 0) { box[0] = 0; box[1] = 0; box[2] = 1; box[3] = 1; }
            if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 1) { box[0] = 1; box[1] = 0; box[2] = 1; box[3] = 0; }
            if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 0) { box[0] = 0; box[1] = 1; box[2] = 1; box[3] = 0; }
            if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 1) { box[0] = 1; box[1] = 1; box[2] = 0; box[3] = 0; }
            if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 0) { box[0] = 0; box[1] = 1; box[2] = 0; box[3] = 1; }
            if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 1) { box[0] = 1; box[1] = 0; box[2] = 0; box[3] = 1; }
            if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 0) { box[0] = 0; box[1] = 0; box[2] = 0; box[3] = 0; }
            if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 1) { box[0] = 0; box[1] = 1; box[2] = 1; box[3] = 1; }}
        public void sbox2(int[] tab, int min, int[] box){
            if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 0) { box[0] = 1; box[1] = 1; box[2] = 1; box[3] = 0; }
            if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 1) { box[0] = 0; box[1] = 0; box[2] = 1; box[3] = 1; }
            if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 0) { box[0] = 0; box[1] = 1; box[2] = 0; box[3] = 0; }
            if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 1) { box[0] = 1; box[1] = 0; box[2] = 0; box[3] = 0; }
            if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 0) { box[0] = 0; box[1] = 0; box[2] = 0; box[3] = 1; }
            if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 1) { box[0] = 1; box[1] = 1; box[2] = 0; box[3] = 0; }
            if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 0) { box[0] = 1; box[1] = 0; box[2] = 1; box[3] = 0; }
            if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 1) { box[0] = 1; box[1] = 1; box[2] = 1; box[3] = 1; }
            if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 0) { box[0] = 0; box[1] = 1; box[2] = 1; box[3] = 1; }
            if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 1) { box[0] = 1; box[1] = 1; box[2] = 0; box[3] = 1; }
            if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 0) { box[0] = 1; box[1] = 0; box[2] = 0; box[3] = 1; }
            if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 1) { box[0] = 0; box[1] = 1; box[2] = 1; box[3] = 0; }
            if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 0) { box[0] = 1; box[1] = 0; box[2] = 1; box[3] = 1; }
            if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 1) { box[0] = 0; box[1] = 0; box[2] = 1; box[3] = 0; }
            if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 0) { box[0] = 0; box[1] = 0; box[2] = 0; box[3] = 0; }
            if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 1) { box[0] = 0; box[1] = 1; box[2] = 0; box[3] = 1; }}}
    public class Mini_AES : SBox{
        void podstawienie(int[] tab, int[] tab2, int[] box00, int[] box01, int[] box10, int[] box11){
	        sbox1(tab, 0, box00); // SBOX1 BOX00
	        sbox1(tab, 4, box01); // SBOX1 BOX01
	        sbox1(tab, 8, box10); // SBOX1 BOX10
	        sbox1(tab, 12, box11); // SBOX1 BOX11
	        for (int i = 0; i < 4; i++){
		        tab2[i + 0] = box00[i];
	        	tab2[i + 4] = box01[i];
		        tab2[i + 8] = box10[i];
		        tab2[i + 12] = box11[i];}}
        void podstawienie_deszyfr(int[] tab, int[] tab2, int[] box00, int[] box01, int[] box10, int[] box11){
	        sbox2(tab, 0, box00); // SBOX2 BOX00
	        sbox2(tab, 4, box01); // SBOX2 BOX01
	        sbox2(tab, 8, box10); // SBOX2 BOX10
	        sbox2(tab, 12, box11); // SBOX2 BOX11
	        for (int i = 0; i < 4; i++){
		        tab2[i + 0] = box00[i];
		        tab2[i + 4] = box01[i];
		        tab2[i + 8] = box10[i];
		        tab2[i + 12] = box11[i];}}
        void mnozenie(int[] tab2, int[] tab, int[] m, int x){
	        for (int i = 0, p = 3; i < 4; i++, p--){
			    for (int u = i, f = 3; u < 4 + i; u++, f--){
				    if (m[p] == 1 && tab2[p] == 1){
					    tab[5 - u] = (tab[5 - u] + tab2[f+x])%2;}}}}
        void dzielenie(int[] t, int[] outk){
	
    int[] dzielnik = new int[] { 1, 0, 0, 1, 1 };
	
	for(int y = 0; y<2; y++)
	{
		if (t[y] == 1)
		{
			for (int i = 0; i<5; i++)
			{
				t[y + i] ^= dzielnik[i];
			}
		}
	}
	for (int i = 0; i < 4; i++)
		outk[i] = t[i + 2];
} 
        void dodawanie(int[] a1, int[] a2, int[] result){
	        int i, c = 0;
        	for (i = 5; i >= 0; i--){
		    result[i] = ((a1[i] ^ a2[i]) ^ c);
		    c = ((a1[i] & a2[i]) | (a1[i] & c)) | (a2[i] & c);}}
        public void szyfrowanie(int[] t, int[] k0, int[] k1, int[] k2){
	        int dlugosc = t.Length / 16, licznik=0;
	        int[] tab = new int[16];
	        while (dlugosc>0){
		// Pobranie 16 bitow
		    for (int i = 0; i < 16; i++){
			    tab[i] = t[licznik]; 
			    licznik++;}
		// Dodanie klucza 0
		    for (int i = 0; i<16; i++){
			    tab[i] = tab[i] ^ k0[i];}
		// Zastosowanie funkcji podstawienia na bloku
            int[] box00 = new int[4], box01 = new int[4], box10 = new int[4], box11 = new int[4];
            int[] tab2 = new int[16];
		    podstawienie(tab, tab2, box00, box01, box10, box11);
		// Zamiana wierszy 10 i 11
            int[] temp = new int[4];
		    for (int i = 0; i<4; i++){
			    temp[i] = tab2[i + 8];
			    tab2[i + 8] = tab2[i + 12];
			    tab2[i + 12] = temp[i];}
		// Mieszanie kolumn
            int[] m11 = new int[] { 0, 0, 1, 1 }; // 0,0 i 1,1
            int[] m10 = new int[] { 0, 0, 1, 0 }; // 0,1 i 1,0
			    // Mnozenie
            int[] mn00 = new int[6], mn01 = new int[6], mn10 = new int[6], mn11 = new int[6];
            int[] mnn00 = new int[6], mnn01 = new int[6], mnn10 = new int[6], mnn11 = new int[6];
            int[] mx00 = new int[6], mx01 = new int[6], mx10 = new int[6], mx11 = new int[6];
                    // Wyniki mnozenia macierzy 2x2
		        mnozenie(tab2, mn00, m11, 0);
		        mnozenie(tab2, mn01, m10, 0);
		        mnozenie(tab2, mn10, m11, 8);
		        mnozenie(tab2, mn11, m10, 8);
		            // +
		        mnozenie(tab2, mnn00, m10, 4);
		        mnozenie(tab2, mnn01, m11, 4);
		        mnozenie(tab2, mnn10, m10, 12);
		        mnozenie(tab2, mnn11, m11, 12);
                    // Sumowanie wynikow
			    dodawanie(mn00, mnn00, mx00);
			    dodawanie(mn01, mnn01, mx01);
			    dodawanie(mn10, mnn10, mx10);
			    dodawanie(mn11, mnn11, mx11);
			        // Dzielenie
                int[] d00 = new int[4], d01 = new int[4], d10 = new int[4], d11 = new int[4];
		        dzielenie(mx00, d00);
		        dzielenie(mx01, d01);
		        dzielenie(mx10, d10);
		        dzielenie(mx11, d11);
		// Wpisanie do tablicy
		    for (int i = 0; i < 4; i++){
			    tab[i + 0] = d00[i];
			    tab[i + 4] = d01[i];
			    tab[i + 8] = d10[i];
			    tab[i + 12] = d11[i];}
		// Dodanie klucza 1
		    for (int i = 0; i<16; i++){
			    tab[i] = tab[i] ^ k1[i];}
		// Zastosowanie funkcji podstawienia na bloku
		    podstawienie(tab, tab2, box00, box01, box10, box11);
		// Zamiana wierszy 10 i 11
		    for (int i = 0; i<4; i++){
			    temp[i] = tab2[i + 8];
			    tab2[i + 8] = tab2[i + 12];
			    tab2[i + 12] = temp[i];}
		// Dodanie klucza 1
		    for (int i = 0; i<16; i++){
			    tab2[i] = tab2[i] ^ k2[i];}
		    Console.Write("Wynik koncowy: ");
		    for (int i = 0; i < 16; i++)
                Console.Write("{0}", tab2[i]);
		    Console.Write("\n");
            dlugosc--;}
}
        public void deszyfrowanie(int[] t, int[] k0, int[] k1, int[] k2){
	        int dlugosc = t.Length / 16, licznik=0;
	        int[] tab = new int[16];
	        while (dlugosc>0){
		// Pobranie 16 bitow
		    for (int i = 0; i < 16; i++){
			    tab[i] = t[licznik];
			    licznik++;		}
		// Dodanie klucza 2
	    	for (int i = 0; i<16; i++){
			    tab[i] = tab[i] ^ k2[i];}
		// Zamiana wierszy 10 i 11
		    int[] temp = new int[4];
		    for (int i = 0; i<4; i++){
			    temp[i] = tab[i + 8];
			    tab[i + 8] = tab[i + 12];
			    tab[i + 12] = temp[i];}
		// Podstawienie dla deszyfrowania
		    int[] box00 = new int[4], box01 = new int[4], box10 = new int[4], box11 = new int[4];
		    int[] tab2 = new int[16];
		    podstawienie_deszyfr(tab, tab2, box00, box01, box10, box11);
		// Dodanie klucza 1
		    for (int i = 0; i<16; i++){
			    tab2[i] = tab2[i] ^ k1[i];}
		// Mieszanie kolumn
		    int[] m11 = new int[] { 0, 0, 1, 1 }; // 0,0 i 1,1
		    int[] m10 = new int[] { 0, 0, 1, 0 }; // 0,1 i 1,0
		// Mnozenie
		    int[] mn00 = new int[6], mn01 = new int[6], mn10 = new int[6], mn11 = new int[6];
            int[] mnn00 = new int[6], mnn01 = new int[6], mnn10 = new int[6], mnn11 = new int[6];
            int[] mx00 = new int[6], mx01 = new int[6], mx10 = new int[6], mx11 = new int[6];

		        mnozenie(tab2, mn00, m11, 0);
		        mnozenie(tab2, mn01, m10, 0);
		        mnozenie(tab2, mn10, m11, 8);
		        mnozenie(tab2, mn11, m10, 8);
		            // +
		        mnozenie(tab2, mnn00, m10, 4);
		        mnozenie(tab2, mnn01, m11, 4);
		        mnozenie(tab2, mnn10, m10, 12);
		        mnozenie(tab2, mnn11, m11, 12);

		    for (int i = 0; i < 6; i++){
			    dodawanie(mn00, mnn00, mx00);
			    dodawanie(mn01, mnn01, mx01);
			    dodawanie(mn10, mnn10, mx10);
			    dodawanie(mn11, mnn11, mx11);}
		           // Dzielenie
            int[] d00 = new int[4], d01 = new int[4], d10 = new int[4], d11 = new int[4];
		        dzielenie(mx00, d00);
		        dzielenie(mx01, d01);
		        dzielenie(mx10, d10);
		        dzielenie(mx11, d11);
		// Wpisanie do tablicy
		    for (int i = 0; i < 4; i++){
			tab[i + 0] = d00[i];
			tab[i + 4] = d01[i];
			tab[i + 8] = d10[i];
			tab[i + 12] = d11[i];}
		// Zamiana wierszy 10 i 11
		    for (int i = 0; i<4; i++){
			    temp[i] = tab[i + 8];
			    tab[i + 8] = tab[i + 12];
			    tab[i + 12] = temp[i];}
		// Zastosowanie funkcji podstawienia na bloku
		    podstawienie_deszyfr(tab, tab2, box00, box01, box10, box11);
		// Dodanie klucza 0
		    for (int i = 0; i<16; i++){
			    tab2[i] = tab2[i] ^ k0[i];}
        Console.Write("Wynik koncowy: ");
        for (int i = 0; i < 16; i++)
            Console.Write("{0}", tab2[i]);
        Console.Write("\n");
        dlugosc--;}
}}
    public static class Keygen{ 
    public static int[] generuj(int[] klucz0, int[] box11, int[] tabs1){
        int[] klucz1 = new int[16];
        for (int i = 0; i < 4; i++){
            klucz1[i + 0] = klucz0[i + 0] ^ box11[i] ^ tabs1[i];
            klucz1[i + 8] = klucz0[i + 8] ^ klucz1[i + 0];
            klucz1[i + 4] = klucz0[i + 4] ^ klucz1[i + 8];
            klucz1[i + 12] = klucz0[i + 12] ^ klucz1[i + 4];}
        return klucz1;}
    }
    class Program{
    static void Main(string[] args){
        int[] klucz0 = new int[] { 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0 }; // Klucz 0 rundy
    // Pobranie tekstu w formie binarnej z pliku
        string tekst2 = File.ReadAllText(@"C:\Users\mmrod_000\Documents\Visual Studio 2013\Projects\SitoRSAc\SitoRSAc\plik.txt");
        int[] tekst = new int[tekst2.Length];
        for(int i = 0 ; i<tekst2.Length ; i++){
            tekst[i] = (int)tekst2[i]-48;}
        Mini_AES a = new Mini_AES();
    // Wypisanie tekstu
	    Console.Write("Do szyfrowania: ");
	    for (int i = 0; i < tekst.Length; i++)
		    Console.Write("{0}",tekst[i]); Console.Write("\n");
	// Wypisanie klucza rundy 0
	    Console.Write("Klucz 0: ");
	    for (int i = 0; i < 16; i++)
		    Console.Write("{0}", klucz0[i]); Console.Write("\n");
	// Tworzenie kluczy rund 1 i 2
	    int[] klucz1 = new int[16], klucz2 = new int[16], box11 = new int[4];
	    int[] tabs1 = new int[] { 0, 0, 0, 1 }, tabs2 = new int[] { 0, 0, 1, 0 };
	    a.sbox1(klucz0, 12, box11); // SBOX1
	// Runda 1
        klucz1 = Keygen.generuj(klucz0, box11, tabs1);
	    a.sbox1(klucz1, 12, box11); // SBOX1
	// Runda 2
        klucz2 = Keygen.generuj(klucz1, box11, tabs2);
	// Wypisanie kluczy rundy 1 i 2;
        Console.Write("Klucz 1: ");
	    for (int i = 0; i < 16; i++)
            Console.Write("{0}", klucz1[i]); Console.Write("\n");
        Console.Write("Klucz 2: ");
	    for (int i = 0; i < 16; i++)
            Console.Write("{0}", klucz2[i]); Console.Write("\n");
	// Program
        Console.Write("0 - Szyfrowanie : 1 - Deszyfrowanie\n");
        int whattodo = Convert.ToInt32(Console.ReadLine());
	        if (whattodo == 0){a.szyfrowanie(tekst, klucz0, klucz1, klucz2);}
	        else{a.deszyfrowanie(tekst, klucz0, klucz1, klucz2);}            
        int x = new int();
        x = Convert.ToInt32(Console.ReadLine());
        }}
}