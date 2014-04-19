#include <iostream>
#include <time.h>
#include <math.h>
#include <inttypes.h>
#include <conio.h>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

__int64 po[35] =
{ 1 << 0, 1 << 1, 1 << 2, 1 << 3, 1 << 4, 1 << 5, 1 << 6,
1 << 7, 1 << 8, 1 << 9, 1 << 10, 1 << 11, 1 << 12, 1 << 13,
1 << 14, 1 << 15, 1 << 16, 1 << 17, 1 << 18, 1 << 19, 1 << 20,
1 << 21, 1 << 22, 1 << 23, 1 << 24, 1 << 25, 1 << 26, 1 << 27,
1 << 28, 1 << 29, 1 << 30, 1 << 31, 1 << 32, 1LLU << 33, 1LLU << 34};

__int64 power_modulo_fast(__int64 a, __int64 b, __int64 m)
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

int MillerRabin(__int64 n, __int64 k)
{
	int s = 0;
	int s2 = 1;
	int a, d, i, r, p;
	srand(time(NULL));

	if (n<4)
	{
		return 1;
	}
	if (n % 2 == 0)
	{
		return 0;
	}

	while ((s2 & (n - 1)) == 0)
	{
		s += 1;
		s2 <<= 1;
	}
	d = n / s2;

	for (i = 0; i<k; i++)
	{
		a = 1 + (int)((n - 1)*rand() / (RAND_MAX + 1.0));
		if (power_modulo_fast(a, d, n) != 1)
		{
			p = 0;
			for (r = 0; r <= s - 1; r++)
			{
				if (power_modulo_fast(a, po[r] * d, n) == n - 1)
				{
					p = 1;
					break;
				}
			}
			if (p == 0)
			{
				return 0;
			}
		}
	}

	return 1;
}

uintmax_t bin_pow(uintmax_t base, uintmax_t exp)
{
	unsigned long long int res = 1;
	while (exp > 0)
	{
		if (exp & 1)
			res *= base;
		base *= base;
		exp >>= 1;
	}
	return res;
}

bool LucasLehmer(uintmax_t p)
{
	if (p == 2) return 1;
	else
	{
		uintmax_t s = 4;
		uintmax_t M = /*bin_pow(2, p) - 1;*/(1LLU << p) - 1;
		cout << "Sprawdzana liczba: " << M <<"\n";
		for (int i = 3; i <= p ; i++)
		{
			s = power_modulo_fast(s, 2, M) - 2;//(bin_pow(s,2) - 2) % M;
			cout << "S: " << s << "\n";
		}
		if (s == 2) return 1;
		return s == 0;
	}
}

int main()
{
	uintmax_t n, k, c;

	cout<<"Liczba:\n";
	cin>>n;
	c = n;
	cout<<"Dokladnosc:\n";
	cin>>k;

	cout << "Test Millera-Rabina\n";
	if (MillerRabin(n, k) == 1)
	{
		cout<<"Liczba jest prawdopodobnie pierwsza.\n";
	}
	else
	{
		cout<<"Liczba jest zlozona.\n";
	}

	cout << "Ropoczac test Lucasa-Lehmera? 1-TAK, 2-NIE\n";
	int cc;
	cin >> cc;
	if (cc == 1)
	{
		cout << "Test Lucasa-Lehmera\n";

		if (LucasLehmer(c) == 1)
			cout << "Prawdopodobnie jest to liczba Marsenne'a\n";
		else
			cout << "Prawdopodobnie to nie jest liczba Marsenne'a\n";

		cin >> k;
	}
	return 0;
}