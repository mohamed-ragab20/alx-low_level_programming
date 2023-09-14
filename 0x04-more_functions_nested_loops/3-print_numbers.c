#include "main.h"

/**
 * print_number - print num 0 : 9
 *
 * Return: Always 0 (success)
*/

void print_number(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9)
		_putchar('\n');
}
