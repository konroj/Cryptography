#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void sbox1(int tab[], int min, int box[])
{
	if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 0){ box[0] = 1; box[1] = 1; box[2] = 1; box[3] = 0; }
	if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 1){ box[0] = 0; box[1] = 1; box[2] = 0; box[3] = 0; }
	if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 0){ box[0] = 1; box[1] = 1; box[2] = 0; box[3] = 1; }
	if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 1){ box[0] = 0; box[1] = 0; box[2] = 0; box[3] = 1; }
	if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 0){ box[0] = 0; box[1] = 0; box[2] = 1; box[3] = 0; }
	if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 1){ box[0] = 1; box[1] = 1; box[2] = 1; box[3] = 1; }
	if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 0){ box[0] = 1; box[1] = 0; box[2] = 1; box[3] = 1; }
	if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 1){ box[0] = 1; box[1] = 0; box[2] = 0; box[3] = 0; }
	if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 0){ box[0] = 0; box[1] = 0; box[2] = 1; box[3] = 1; }
	if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 1){ box[0] = 1; box[1] = 0; box[2] = 1; box[3] = 0; }
	if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 0){ box[0] = 0; box[1] = 1; box[2] = 1; box[3] = 0; }
	if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 1){ box[0] = 1; box[1] = 1; box[2] = 0; box[3] = 0; }
	if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 0){ box[0] = 0; box[1] = 1; box[2] = 0; box[3] = 1; }
	if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 1){ box[0] = 1; box[1] = 0; box[2] = 0; box[3] = 1; }
	if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 0){ box[0] = 0; box[1] = 0; box[2] = 0; box[3] = 0; }
	if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 1){ box[0] = 0; box[1] = 1; box[2] = 1; box[3] = 1; }
}

void sbox2(int tab[], int min, int box[])
{
	if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 0){ box[0] = 1; box[1] = 1; box[2] = 1; box[3] = 0; }
	if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 1){ box[0] = 0; box[1] = 0; box[2] = 1; box[3] = 1; }
	if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 0){ box[0] = 0; box[1] = 1; box[2] = 0; box[3] = 0; }
	if (tab[min + 0] == 0 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 1){ box[0] = 1; box[1] = 0; box[2] = 0; box[3] = 0; }
	if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 0){ box[0] = 0; box[1] = 0; box[2] = 0; box[3] = 1; }
	if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 1){ box[0] = 1; box[1] = 1; box[2] = 0; box[3] = 0; }
	if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 0){ box[0] = 1; box[1] = 0; box[2] = 1; box[3] = 0; }
	if (tab[min + 0] == 0 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 1){ box[0] = 1; box[1] = 1; box[2] = 1; box[3] = 1; }
	if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 0){ box[0] = 0; box[1] = 1; box[2] = 1; box[3] = 1; }
	if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 0 && tab[min + 3] == 1){ box[0] = 1; box[1] = 1; box[2] = 0; box[3] = 1; }
	if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 0){ box[0] = 1; box[1] = 0; box[2] = 0; box[3] = 1; }
	if (tab[min + 0] == 1 && tab[min + 1] == 0 && tab[min + 2] == 1 && tab[min + 3] == 1){ box[0] = 0; box[1] = 1; box[2] = 1; box[3] = 0; }
	if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 0){ box[0] = 1; box[1] = 0; box[2] = 1; box[3] = 1; }
	if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 0 && tab[min + 3] == 1){ box[0] = 0; box[1] = 0; box[2] = 1; box[3] = 0; }
	if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 0){ box[0] = 0; box[1] = 0; box[2] = 0; box[3] = 0; }
	if (tab[min + 0] == 1 && tab[min + 1] == 1 && tab[min + 2] == 1 && tab[min + 3] == 1){ box[0] = 0; box[1] = 1; box[2] = 0; box[3] = 1; }
}

void podstawienie(int tab[], int tab2[], int box00[], int box01[], int box10[], int box11[])
{
	sbox1(tab, 0, box00); // SBOX1 BOX00
	sbox1(tab, 4, box01); // SBOX1 BOX01
	sbox1(tab, 8, box10); // SBOX1 BOX10
	sbox1(tab, 12, box11); // SBOX1 BOX11
	for (int i = 0; i < 4; i++)
	{
		tab2[i + 0] = box00[i];
		tab2[i + 4] = box01[i];
		tab2[i + 8] = box10[i];
		tab2[i + 12] = box11[i];
	}
}

void podstawienie_deszyfr(int tab[], int tab2[], int box00[], int box01[], int box10[], int box11[])
{
	sbox2(tab, 0, box00); // SBOX2 BOX00
	sbox2(tab, 4, box01); // SBOX2 BOX01
	sbox2(tab, 8, box10); // SBOX2 BOX10
	sbox2(tab, 12, box11); // SBOX2 BOX11
	for (int i = 0; i < 4; i++)
	{
		tab2[i + 0] = box00[i];
		tab2[i + 4] = box01[i];
		tab2[i + 8] = box10[i];
		tab2[i + 12] = box11[i];
	}
}

void mnozenie(int tab2[], int tab[], int m[], int x)
{
	for (int i = 0, p = 3; i < 4; i++, p--){
			for (int u = i, f = 3; u < 4 + i; u++, f--){
				if (m[p] == 1 && tab2[p] == 1){
					tab[5 - u] = (tab[5 - u] + tab2[f+x])%2;
				}
			}
		}
}

void dzielenie(int t[], int out[])
{
	int dzielnik[5] = { 1, 0, 0, 1, 1 };
	
	for (int y = 0; y<2; y++)
	{
		if (t[y] == 1)
		{
			for (int i = 0; i<5; i++)
			{
				t[y + i] ^= dzielnik[i];
			}
		}
	}

	//for (int i = 0; i < 6; i++)
	//	cout << t[i]; cout << ".\n";

	for (int i = 0; i < 4; i++)
		out[i] = t[i + 2];
}

void dodawanie(int a1[], int a2[], int result[]){
	int i, c = 0;
	for (i = 5; i >= 0; i--){
		result[i] = ((a1[i] ^ a2[i]) ^ c); //a xor b xor c
		c = ((a1[i] & a2[i]) | (a1[i] & c)) | (a2[i] & c); //ab+bc+ca
	}
	//result[i] = c;
}

void szyfrowanie(vector<int>t, int k0[], int k1[], int k2[])
{
	int dlugosc = t.size() / 16, licznik=0;
	int tab[16];
	while (dlugosc--)
	{
		// Pobranie 16 bitow
		for (int i = 0; i < 16; i++){
			tab[i] = t[licznik]; 
			licznik++;
		}
		// Dodanie klucza 0
		for (int i = 0; i<16; i++){
			tab[i] = tab[i] ^ k0[i];
		}
		// Zastosowanie funkcji podstawienia na bloku
		int box00[4] = { 0 }, box01[4] = { 0 }, box10[4] = { 0 }, box11[4] = { 0 };
		int tab2[16] = { 0 };
		podstawienie(tab, tab2, box00, box01, box10, box11);
		// Zamiana wierszy 10 i 11
		int temp[4] = { 0 };
		for (int i = 0; i<4; i++){
			temp[i] = tab2[i + 8];
			tab2[i + 8] = tab2[i + 12];
			tab2[i + 12] = temp[i];
		}
		// Mieszanie kolumn
		int m11[4] = { 0, 0, 1, 1 }; // 0,0 i 1,1
		int m10[4] = { 0, 0, 1, 0 }; // 0,1 i 1,0
			// Mnozenie
		int mn00[6] = { 0 }, mn01[6] = { 0 }, mn10[6] = { 0 }, mn11[6] = { 0 };
		int mnn00[6] = { 0 }, mnn01[6] = { 0 }, mnn10[6] = { 0 }, mnn11[6] = { 0 };
		int mx00[6] = { 0 }, mx01[6] = { 0 }, mx10[6] = { 0 }, mx11[6] = { 0 };

		mnozenie(tab2, mn00, m11, 0);
		mnozenie(tab2, mn01, m10, 0);
		mnozenie(tab2, mn10, m11, 8);
		mnozenie(tab2, mn11, m10, 8);
		// +
		mnozenie(tab2, mnn00, m10, 4);
		mnozenie(tab2, mnn01, m11, 4);
		mnozenie(tab2, mnn10, m10, 12);
		mnozenie(tab2, mnn11, m11, 12);

		for (int i = 0; i < 6; i++)
		{
			dodawanie(mn00, mnn00, mx00);
			dodawanie(mn01, mnn01, mx01);
			dodawanie(mn10, mnn10, mx10);
			dodawanie(mn11, mnn11, mx11);
		}
			// Dzielenie
		int d00[4] = { 0 }, d01[4] = { 0 }, d10[4] = { 0 }, d11[4] = { 0 };
		dzielenie(mx00, d00);
		dzielenie(mx01, d01);
		dzielenie(mx10, d10);
		dzielenie(mx11, d11);
		// Wpisanie do tablicy
		for (int i = 0; i < 4; i++)
		{
			tab[i + 0] = d00[i];
			tab[i + 4] = d01[i];
			tab[i + 8] = d10[i];
			tab[i + 12] = d11[i];
		}
		// Dodanie klucza 1
		for (int i = 0; i<16; i++){
			tab[i] = tab[i] ^ k1[i];
		}
		// Zastosowanie funkcji podstawienia na bloku
		podstawienie(tab, tab2, box00, box01, box10, box11);
		// Zamiana wierszy 10 i 11
		for (int i = 0; i<4; i++){
			temp[i] = tab2[i + 8];
			tab2[i + 8] = tab2[i + 12];
			tab2[i + 12] = temp[i];
		}
		// Dodanie klucza 1
		for (int i = 0; i<16; i++){
			tab2[i] = tab2[i] ^ k2[i];
		}
		cout << "Wynik koncowy: ";
		for (int i = 0; i < 16; i++)
			cout << tab2[i]; cout << "\n";
	}
}

void deszyfrowanie(vector<int>t, int k0[], int k1[], int k2[])
{
	int dlugosc = t.size() / 16, licznik = 0;
	int tab[16];
	while (dlugosc--)
	{
		// Pobranie 16 bitow
		for (int i = 0; i < 16; i++){
			tab[i] = t[licznik];
			licznik++;
		}
		// Dodanie klucza 2
		for (int i = 0; i<16; i++){
			tab[i] = tab[i] ^ k2[i];
		}
		// Zamiana wierszy 10 i 11
		int temp[4] = { 0 };
		for (int i = 0; i<4; i++){
			temp[i] = tab[i + 8];
			tab[i + 8] = tab[i + 12];
			tab[i + 12] = temp[i];
		}
		// Podstawienie dla deszyfrowania
		int box00[4] = { 0 }, box01[4] = { 0 }, box10[4] = { 0 }, box11[4] = { 0 };
		int tab2[16];
		podstawienie_deszyfr(tab, tab2, box00, box01, box10, box11);
		// Dodanie klucza 1
		for (int i = 0; i<16; i++){
			tab2[i] = tab2[i] ^ k1[i];
		}
		// Mieszanie kolumn
		int m11[4] = { 0, 0, 1, 1 }; // 0,0 i 1,1
		int m10[4] = { 0, 0, 1, 0 }; // 0,1 i 1,0
		// Mnozenie
		int mn00[6] = { 0 }, mn01[6] = { 0 }, mn10[6] = { 0 }, mn11[6] = { 0 };
		int mnn00[6] = { 0 }, mnn01[6] = { 0 }, mnn10[6] = { 0 }, mnn11[6] = { 0 };
		int mx00[6] = { 0 }, mx01[6] = { 0 }, mx10[6] = { 0 }, mx11[6] = { 0 };

		mnozenie(tab2, mn00, m11, 0);
		mnozenie(tab2, mn01, m10, 0);
		mnozenie(tab2, mn10, m11, 8);
		mnozenie(tab2, mn11, m10, 8);
		// +
		mnozenie(tab2, mnn00, m10, 4);
		mnozenie(tab2, mnn01, m11, 4);
		mnozenie(tab2, mnn10, m10, 12);
		mnozenie(tab2, mnn11, m11, 12);

		for (int i = 0; i < 6; i++)
		{
			dodawanie(mn00, mnn00, mx00);
			dodawanie(mn01, mnn01, mx01);
			dodawanie(mn10, mnn10, mx10);
			dodawanie(mn11, mnn11, mx11);
		}
		// Dzielenie
		int d00[4] = { 0 }, d01[4] = { 0 }, d10[4] = { 0 }, d11[4] = { 0 };
		dzielenie(mx00, d00);
		dzielenie(mx01, d01);
		dzielenie(mx10, d10);
		dzielenie(mx11, d11);
		// Wpisanie do tablicy
		for (int i = 0; i < 4; i++)
		{
			tab[i + 0] = d00[i];
			tab[i + 4] = d01[i];
			tab[i + 8] = d10[i];
			tab[i + 12] = d11[i];
		}
		// Zamiana wierszy 10 i 11
		for (int i = 0; i<4; i++){
			temp[i] = tab[i + 8];
			tab[i + 8] = tab[i + 12];
			tab[i + 12] = temp[i];
		}
		// Zastosowanie funkcji podstawienia na bloku
		podstawienie_deszyfr(tab, tab2, box00, box01, box10, box11);
		// Dodanie klucza 0
		for (int i = 0; i<16; i++){
			tab2[i] = tab2[i] ^ k0[i];
		}
		cout << "Wynik koncowy: ";
		for (int i = 0; i < 16; i++)
			cout << tab2[i]; cout << "\n";
	}
}

int main()
{
	int klucz0[16] = { 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0 }; // Klucz 0 rundy
	vector<int> tekst;
	// Przekazanie tekstu z pliku do vectora
	fstream plik;
	plik.open("plik.txt");
	int x;
	while (!plik.eof())
	{
		plik >> x;
		tekst.push_back(x);
	}
	plik.close();
	// Wypisanie tekstu
	cout << "Do szyfrowania: ";
	for (int i = 0; i < tekst.size(); i++)
		cout << tekst[i]; cout << "\n";
	// Wypisanie klucza rundy 0
	cout << "Klucz 0: ";
	for (int i = 0; i < 16; i++)
		cout << klucz0[i]; cout << "\n";
	// Tworzenie kluczy rund 1 i 2
	int klucz1[16] = { 0 }, klucz2[16] = { 0 }, box11[4] = { 0 };
	int tabs1[4] = { 0, 0, 0, 1 }, tabs2[4] = { 0, 0, 1, 0 };
	sbox1(klucz0, 12, box11); // SBOX1
	// Runda 1
	for (int i = 0; i<4; i++){
		klucz1[i + 0] = klucz0[i + 0] ^ box11[i] ^ tabs1[i];
		klucz1[i + 8] = klucz0[i + 8] ^ klucz1[i + 0];
		klucz1[i + 4] = klucz0[i + 4] ^ klucz1[i + 8];
		klucz1[i + 12] = klucz0[i + 12] ^ klucz1[i + 4];
	}
	sbox1(klucz1, 12, box11); // SBOX1
	// Runda 2
	for (int i = 0; i<4; i++){
		klucz2[i + 0] = klucz1[i + 0] ^ box11[i] ^ tabs2[i];
		klucz2[i + 8] = klucz1[i + 8] ^ klucz2[i + 0];
		klucz2[i + 4] = klucz1[i + 4] ^ klucz2[i + 8];
		klucz2[i + 12] = klucz1[i + 12] ^ klucz2[i + 4];
	}
	// Wypisanie kluczy rundy 1 i 2;
	cout << "Klucz 1: ";
	for (int i = 0; i < 16; i++)
		cout << klucz1[i]; cout << "\n";
	cout << "Klucz 2: ";
	for (int i = 0; i < 16; i++)
		cout << klucz2[i]; cout << "\n";
	// Program
	int whattodo;
	cout << "0-szyfrowanie : 1-deszyfrowanie\n";
	cin >> whattodo;
	if (whattodo == 0)
	{
		szyfrowanie(tekst, klucz0, klucz1, klucz2);
	}
	else
	{
		deszyfrowanie(tekst, klucz0, klucz1, klucz2);
	}
	cin >> x;
	return 0;
}