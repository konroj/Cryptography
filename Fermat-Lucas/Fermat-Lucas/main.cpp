#include <iostream>
#include <cmath>
#include <vector>
#include <time.h> 
using namespace std;

vector <unsigned long long int> tab, tab2, tab3;

int power_modulo_fast(unsigned long long int a, unsigned long long int b, unsigned long long int m)
{
	int i;
	unsigned long long int result = 1;
	unsigned long long int x = a%m;

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

void Fermat(unsigned long int p)
{
	unsigned long long x, y, z, m, n;

	x = (unsigned long long)ceil(sqrt(p));
	do
	{
		z = x * x - p;
		y = (unsigned long long)floor(sqrt(z));
		if (z == y * y)
		{
			m = x + y;
			n = x - y;
			if (n == 1) break;
			Fermat(m);
			Fermat(n);
			return;
		}
		x++;
	} while (x + y < p);
	tab.push_back(p);
}

/*
double bin_pow(double base, unsigned int exp)
{
	double res = 1.0;
	while (exp>0)
	{
		if (exp & 1)
			res *= base;
		base *= base;
		exp >>= 1;
	}
	return res;
}*/

int main()
{
	locale loc("");
	locale::global(loc);
	cout.imbue(loc);
	cin.imbue(loc);
	srand(time(NULL));

	unsigned long long int p, u;
	int a;
	cout << "Test Fermata + Lucasa-Lehmera\n";

	cout << "Podaj liczbê:\n";
	cin >> p;

	cout << "N-1\n[";
	u=p-1;
	p--;
	while (p % 2 == 0)
	{
		p /= 2;
		tab.push_back(2);
	}
	if (p > 1) Fermat(p);

	for (int i = 0; i < tab.size() - 1; i++)
	{
		cout << tab[i] << ",";
	}cout << tab[tab.size() - 1] << "]\n";


	for (int j = 0; j < 10; j++)
	{
		int b = rand() % u + 2;
		bool tak = true;
		for (int i = 0; i < tab.size(); i++)
		{
			if (power_modulo_fast(b, u, u + 1) != 1 || power_modulo_fast(b, (u / tab[i]), u + 1) == 1)
				tak = false;
		}

		if (tak == true)
		{
			cout << "Dla B:"<<b<<" liczba jest pierwsza.\n";
		}
		else
			cout << "Dla B:" << b << " liczba nie jest pierwsza.\n";
	}
	cin >> a;
	return 0;
}