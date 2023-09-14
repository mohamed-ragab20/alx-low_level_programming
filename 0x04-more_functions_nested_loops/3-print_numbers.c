#include "main.h"

/**
 * print_number - print num 0 : 9
 *
 * Return: Always 0 (success)
*/

void print_number(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9)
		_putchar('\n');
}
