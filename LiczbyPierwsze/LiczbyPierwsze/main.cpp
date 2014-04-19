#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int power_modulo_fast(int a, int b, int m)
{
	int i;
	int result = 1;
	long int x = a%m;

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

	return result%m;
}

int Fermat(int n, int k)
{
	int a, i;
	srand(time(NULL));

	if (n<4)
	{
		return 1;
	}

	for (i = 0; i<k; i++)
	{
		a = 2 + (int)((n - 2)*rand() / (RAND_MAX + 1.0));
		if (power_modulo_fast(a, n - 1, n) != 1)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int n, k;

	printf("Podaj liczbe do sprawdzenia.\n");
	scanf_s("%d", &n);

	printf("Podaj dokladnosc sprawdzenia.\n");
	scanf_s("%d", &k);

	if (Fermat(n, k) == 1)
	{
		printf("Liczba jest prawdopodobnie pierwsza.\n");
	}
	else
	{
		printf("Liczba jest zlozona.\n");
	}

	scanf_s("%d", &n);
	return 0;
}