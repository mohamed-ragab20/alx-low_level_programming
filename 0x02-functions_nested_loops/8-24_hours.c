#include "main.h"

/**
 *jack_bauer- print all minute of day
*/

void jack_bauer(void)
{
	for (hor = 0; hor <= 23; hor++)
	{
		for (mnt = 0; mnt <= 59; mnt++)
		{
			_putchart((hor / 10) + 48);
			_putchart((hor % 10) + 48);
			_putchart(':');
			_putchart((mnt / 10) + 48);
			_putchart((mnt % 10) + 48);
			_putchart('\n');
		}
	}
}
