#include "main.h"

/**
 * _isupper - check if l is upper
 *
 * @l: input from alphabet
 *
 * return: 1 if uppercase, 0 of not
*/

int _isupper(int l)
{
	if (l >= 65 && l <= 90)
		return (1);
	else
		return (0);
}
