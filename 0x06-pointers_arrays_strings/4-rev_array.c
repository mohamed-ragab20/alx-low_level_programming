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
	int x, r;

	for (x = 0; x < n / 2; x++)
	{
		r = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = r;
	}
}
