#include "main.h"

/**
 * rev_string - Reverse a string
 *
 * @s: input
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int i = 0, l;

	l = _strlen(s) - 1;
	while (l > i)
	{
		swap_char(s + l, s + i);
		i++;
		l--;
	}
}

/**
 * _strlen - returns the length of a string
 *
 * @s: input
 *
 * Return: lenght
*/

int _strlen(char *s)
{
	int c, io;

	io = 0;
	for (c = 0; s[c] != '\0'; c++)
		io++;

	return (io);
}

/**
 * swap_char - swap two characters
 *
 * @a: frist input
 * @b: second input
 *
 * Return: nothing
*/

void swap_char(char *a, char *b)
{
	char t = *a;

	*a = *b;
	*b = t;
}
