#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: input
 *
 * Return: a
*/

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s > '\0')
	{
		a += _strlen_recursion(s + 1) + 1;
	}
	return (a);
}
