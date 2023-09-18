#include "main.h"

/**
 * rev_string -  reverses a string
 *
 * @s: input
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int a, b;
	char t;

	for (a = 0; s[1] != '\0'; ++a);

	for (b = 0; b < a / 2; b++)
	{
		t = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = t;
	}
}
