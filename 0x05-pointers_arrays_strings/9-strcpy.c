#include"main.h"

/**
 * _strcpy -  copies the string pointed to by src
 *
 * @dest: input
 * @src: input
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
