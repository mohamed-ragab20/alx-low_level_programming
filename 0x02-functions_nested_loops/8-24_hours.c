#include "main.h"

/**
 *jack_bauer- print all minute of day
*/

void jack_bauer(void)
{
	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchart((hr / 10) + 48);
			_putchart((hr % 10) + 48);
			_putchart(':');
			_putchart((min / 10) + 48);
			_putchart((min % 10) + 48);
			_putchart('\n');
		}
	}
}
