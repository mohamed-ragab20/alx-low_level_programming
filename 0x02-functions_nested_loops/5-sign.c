#include "main.h"

/**
 *print_sing - print + if n is greater zero,
 *	0 if n is zero and - if n is less.
 *
 *@n: takes integer type from function
 *
 *Return: 1 if +, 0 if 0 and 0 -1 if -
*/

int print_sing(int n)
{
	if (n > 0)
	{
		_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
		_putchar(43);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
