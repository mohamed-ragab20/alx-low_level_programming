#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - Returns the length
 *
 * @str: input
 *
 * Return: l
*/

int strlen_no_wilds(char *str)
{
	int l = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			l++;

		i++;
		l += strlen_no_wilds(str + i);
	}
	return (l);
}

/**
 * iterate_wild - check string located
 *
 * @wildstr: input
 *
 * Return: nothing
*/

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 *  postfix_match - Checks if a string str matches
 *
 *  @str: input
 *  @postfix: input
 *
 *  Return: postfix
*/

char *postfix_match(char *str, char *postfix)
{
	int s_l = strlen_no_wilds(str) - 1;
	int p_l = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + s_l - p_l) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 *  wildcmp - Compares two strings
 *
 *  @s1: input
 *  @s2: input
 *
 *  Return: 0 , 1 or ((wildcmp)s1+s2)
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
