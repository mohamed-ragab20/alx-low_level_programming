#include "main.h"

/**
 * _islower - check if character lowercase
 *
 * @c: check input
 *
 * Return: return 1 if c is lowercase
 *	otherwise always 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
}
