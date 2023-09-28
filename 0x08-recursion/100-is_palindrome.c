#include "main.h"

/**
 * _strlen - return length
 *
 * @str: input
 *
 * Return: length
*/

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - checks a palindrome
 *
 * @a: input
 * @b: input
 * @c: input
 *
 * Return: 1 or 0
*/

int check_palindrome(int a, int b, char *c)
{
	if (a >= b)
		return (1);
	else if (c[a] != c[b])
		return (0);
	else
		return (check_palindrome(a + 1, b - 1, c));
}

/**
 * is_palindrome - check if a string palindrome
 *
 * @s: input
 *
 * Return: 1 or 0
*/

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
