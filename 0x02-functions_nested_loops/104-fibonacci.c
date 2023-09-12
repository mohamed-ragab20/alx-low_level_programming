#include "main.h"

/**
 * numLength - returns the length of string
 *
 * @n: operand num
 *
 * Return: num of digit
*/

int numLength(int n)
{
	int l = 0;

	if  (!n)

		return (1);

	while (n)
	{
		n = n / 10;
		l += 1;
	}

	return (l);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int c, in;
	unsigned long f1 = 1, f2 = 2, s, mx = 100000000, f1o = 0, f2o = 0, so = 0;

	for (c = 1; c <= 98; c++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		in = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && in > 0)
		{
			printf("%d", 0);
			in--;
		}
		printf("%lu", f1);

		s = (f1 + f2) % mx;
		so = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = s;
		f2o = so;

		if (c != 98)
			printf(", ");

		else
			printf("\n");
	}
	return (0);
}
