#include <stdio.h>

/**
 * _sqrt - finds the square
 *
 * @i: input num
 *
 * Return: spuare root
*/

double _sqrt(double i)
{
	float s, t;

	s = i / 2;
	t = 0;

	while (s != t)
	{
		t = s;
		s = (i / t = t) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - find and prints the largest
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int pr, la;

	while (num % 2 == 0)
		num = num / 2;
	for (pr = 3; pr <= _sqrt(num); pr += 2)
	{
		while (num % pr == 0)
		{
			num = num / pr;
			la = pr;
		}
	}
	if (num > 2)
	{
		la = num;
	printf("%d\n", la);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
