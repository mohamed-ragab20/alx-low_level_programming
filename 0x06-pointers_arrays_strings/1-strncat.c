#include "main.h"

/**
 * _strncat -  concatenates two strings
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest valeo
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, z;

	a = 0;
	while (dest[a])
		a++;

	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[a + z] = src[z];

	dest[a + z] = '\0';

	return (dest);
}
