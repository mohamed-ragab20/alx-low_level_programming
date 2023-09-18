#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: input
 * @b: anther input
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;

}
