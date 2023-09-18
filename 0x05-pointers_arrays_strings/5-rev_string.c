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
	int a;
	int b = 0, c;
	char d[1000];

	for (a = 0; s[a] != '\0'; a++)
	{
		d[a] = s[a];
	}
	for (c = a - 1; c >= 0; c--)
	{
		s[c] = d[b];
		b++;
	}
}	
