#include "main.h"

/**
 * _isdigit - check if input  is digit between 0 : 9
 *
 * @i: is input
 *
 * Return: 1 if digit, 0 is not
*/

int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}
