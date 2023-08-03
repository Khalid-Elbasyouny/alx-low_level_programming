#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *move_past_star - iterates past asterisk
 *
 * @s2: the second string
 *
 * Return: pointer past stare
 *
*/
char *move_past_star(char *s2)
{
	if (*s2 == '*')
	{
		return (move_past_star(s2 + 1));
	}
	else
	{
		return (s2);
	}
}
/**
 * incep - cerat some glorey
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical, 0 if not
 *
*/
int incep(char *s1, char *s2)
{
	int val = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		val += wildcmp(s1 + 1, s2 + 1);
	val += incep(s1 + 1, s2);
	return (val);
}


/**
 * wildcmp - a program that compares two strings
 *
 * @s1: a first string
 * @s2: secound string
 *
 * Return: 1 if idectical, 0 if not
 *
*/

int wildcmp(char *s1, char *s2)
{
	int val = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}

	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			val += wildcmp(s1 + 1, s2 + 1);
		val += incep(s1, s2);
		return (!!val);
	}
	return (0);
}
