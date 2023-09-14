#include <stdio.h>

/**
 * _sqrt - finds the square
 *
 * @i: input num
 *
 * Return: spuare root
*/

gcc double _sqrt(double i)
{
	float s, t;

	s = i / 2;
	t = 0;

	while (s != t)
	{
		t = s;
		s = (i / t = t) / 2;
	}
	return (sqrt);
}


