#include "main.h"

/**
 * _strchr - fills memory with a constant byte
 *
 * @s: input
 * @c: input
 *
 * Return: s value
*/

char *_strchr(char *s, char c)
{
	int a;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
