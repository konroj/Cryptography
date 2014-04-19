#include <iostream>

using namespace std;


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


class MV
{
protected:
	int pier[2];

public:
	int elipsa(int p)
	{
		
		return p;
	}

	void szyfr(int out1, int out2)
	{
		pier[0];
		pier[1];
	}

};



int main()
{
	MV ob;
	cout << "Program realizujacy system Mezenesa-Vanstone'a\nPodaj liczbe pierwsza p:\n";
	int p;
	cin >> p;

	ob.elipsa(p);

	return 0;
}