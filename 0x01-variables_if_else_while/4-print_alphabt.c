#include <stdio.h>

/**
 * main - Enter point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <=  'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putcha('\n');

	return (0);
}
