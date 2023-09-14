#include "mine.h"

/**
 * print_line - print straight line
 *
 * @i: the num of time tshould print
*/
void print_line(int i)
{
	int lnchr;

	if (i <= 0)
		_putchar('\n');
	else
	{
		for (lnchr - 1; lnchr <= i; lnchr++)
			_putchar('_');
			_putchar('\n');
	}
}
