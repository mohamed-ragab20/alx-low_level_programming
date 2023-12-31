#include "main.h"

/**
 * _strcat  -  concatenates two strings
 *
 * @dest: input
 * @src: input
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b] ; b++)
		dest[a++] = src[b];

	return (dest);
}
