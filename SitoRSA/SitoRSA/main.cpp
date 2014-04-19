#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

class RSA
{
private:
	__int64 N;
	__int64 n;
	__int64 E;
	__int64 D;
	__int64 P;
	__int64 Q;

	__int64 generuj(){ // Sito Eratostenesa

		__int64 liczba = 100000, i, j, pierwiastek, *tablica;

		pierwiastek = (__int64)sqrt((double)liczba);
		tablica = new __int64[liczba + 1];
		for (i = 0; i <= liczba; i++)
			tablica[i] = i;

		for (i = 2; i <= pierwiastek; i++)
		{
			if (tablica[i] != 0)
			for (j = 2 * i; j <= liczba; j += i)
				tablica[j] = 0;
		}

		for (i = rand() % liczba+10000; i <= liczba; i++)
		if (tablica[i] != 0)
		{
			return tablica[i];
		}
	} 

	__int64 NWD(__int64 nwd_a, __int64 nwd_b) // Rozszerzony Algorytm Euklidesa
	{
		__int64 r, nwd, a, q, b;
		__int64 x, x1, x2;
		__int64 y, y1, y2;

		if (nwd_b > nwd_a)
		{
			nwd = nwd_b;
			nwd_b = nwd_a;
			nwd_a = nwd;
		}

		a = nwd_a;
		b = nwd_b;

		q = a / b;
		r = a - q*b;
		nwd = b;

		x2 = 1;
		x1 = 0;
		y2 = 0;
		y1 = 1;
		x = 1;
		y = y2 - (q - 1)*y1;

		while (r != 0)
		{
			a = b;
			b = r;

			x = x2 - q*x1;
			x2 = x1;
			x1 = x;

			y = y2 - q*y1;
			y2 = y1;
			y1 = y;

			nwd = r;
			q = a / b;
			r = a - q*b;
		}
		return nwd;
	} 

	void crypt()
	{
		P = generuj();
		Q = generuj();

		while (P == Q)
		{
			__int64 Q = generuj();
		}
		cout << "P: " << P << "\n";
		cout << "Q: " << Q << "\n";
	}

	void NPQED() // Wyliczanie N(P*Q), n(<P-1>*<Q-1>), E-szyfrowanie, D-odszyfrowanie
	{
		N = P*Q;
		cout << "N: " << N << "\n";

		n = (P - 1)*(Q - 1);

		while (true)
		{
			E = rand() % n + 10000;
			if (NWD(E, n) == 1) break;
		}
		cout << "E: " << E << "\n";

		for (int i = 1; i < n; i++)
		{
			if ((i*E) % n == 1)
			{
				D = i;
				break;
			}

		}
		cout << "D: " << D << "\n";
	}

	__int64 power_modulo_fast(__int64 a, __int64 b, __int64 m) //Szybkie potegowanie modulo
	{
		int i;
		__int64 result = 1;
		__int64 x = a%m;

		for (i = 1; i <= b; i <<= 1)
		{
			x %= m;
			if ((b&i) != 0)
			{
				result *= x;
				result %= m;
			}
			x *= x;
		}

		return result;
	}

public:
	void szyfruj()
	{
		int a;
		cout << "Wygeneruj P i Q -> 1\nPodaj wlasne P i Q -> 2\n";
		cin >> a;
		if (a == 1)
		{
			crypt();
		}
		else
		{
			cout << "Podaj liczbe P: \n";
			cin >> P;
			cout << "Podaj liczbe Q: \n";
			cin >> Q;
		}
		NPQED();
		__int64 m;
		cout << "Podaj liczbe do zaszyfrowania: \n";
		cin >> m;
		cout << "Zaszyfrowano: " << power_modulo_fast(m, E, N) << "\n\n";
	}

	void odszyfruj()
	{
		int a;
		cout << "Wygeneruj P i Q -> 1\nPodaj wlasne P i Q -> 2\n";
		cin >> a;
		if (a == 1)
		{
			crypt();
		}
		else
		{
			cout << "Podaj liczbe P: \n";
			cin >> P;
			cout << "Podaj liczbe Q: \n";
			cin >> Q;
		}
		NPQED();
		__int64 c;
		cout << "Podaj liczbe do odszyfrowania: \n";
		cin >> c;
		cout << "Zaszyfrowano: " << power_modulo_fast(c, D, N) << "\n\n";
	}

};

int main()
{
	srand(time(NULL));
	RSA a;
	int x;
	while (true)
	{
		cout << "Szyfrowanie RSA: 1\nDeszyfrowanie: 2\n";
		cin >> x;
		if (x == 1)
			a.szyfruj();
		else if (x == 2)
			a.odszyfruj();
	}

	return 0;
}