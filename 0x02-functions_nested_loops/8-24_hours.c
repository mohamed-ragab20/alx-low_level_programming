#include "main.h"

/**
 *jack_bauer- print all minute of day
*/

void jack_bauer(void)
{
	int ment, hor;

	for (hor = 0; hor <= 23; hor++)
	{
		for (ment = 0; ment <= 59; ment++)
		{
			_putchar((hor / 10) + 48);
			_putchar((hor % 10) + 48);
			_putchar(':');
			_putchar((ment / 10) + 48);
			_putchar((ment % 10) + 48);
			_putchar('\n');
		}
	}
}
