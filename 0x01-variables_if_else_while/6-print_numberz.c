#include <stdio.h>

/**
 * main - Enter point
 *
 * Description: print 0-9 using putchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
