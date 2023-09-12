#include "main.h"

/**
 * print_times_table - prints time table
 *
 * @n: takes num input
*/

void print_times_table(int n)
{
	int pro, mu, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
		for (mu = 1; mu <= n; mu++)
		{
			_putchar(',');
			_putchar(' ');

			pro = num * mu;

			if (pro <= 9)
				_putchar(' ');
			if (pro <= 99)
				_putchar(' ');
			if (pro >= 100)
			{
				_putchar((pro / 100) + 48);
				_putchar((pro / 10) % 10 + 48);
			}
			 if (pro <= 99 && pro >= 10)
				_putchar((pro / 10) + 48);
				_putchar((pro % 10) + 48);
		}
		_putchar('\n');
		}
	}
}
