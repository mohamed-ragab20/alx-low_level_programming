#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 *
 * @a: input
 * @n: input
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, d, t;

	for (i = 0, d = (n - 1); i < d; i++, d--)
	{
		t = a[i];
		a[i] = a[d];
		a[d] = t;
	}
}
