#include "main.h"

/**
 *  find_root - returns the natural square root of a number
 *
 *  @n: input
 *  @root: input
 *
 * Return: root
*/

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - find root
 *
 * @n: input
 *
 * Return: root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
