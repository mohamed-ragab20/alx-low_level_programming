#include "mine.h"

/**
 * print_line - print straight line
 *
 * @i: the num of time tshould print
*/
void print_line(int i)
{
	int n;

	if (i <= 0)
		_putchar('\n');
	else
	{
		for (n - 1; n <= i; n++)
			_putchar('_');
			_putchar('\n');
	}
}
