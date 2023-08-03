#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * last_index - a program that
 * returns the last index of the string
 *
 * @s: a pointer string
 *
 * Return: int
 *
*/
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
int n = 0;

if (*s > '\0')
	n += last_index(s + 1) + 1;
return (n);
}
/**
 * is_palindrome - a program that
 * returns 1 if a string is a palindrome and 0 if not.
 * otherwise return (0).
 *
 * @s: a given string
 *
 * Return: 1 (palindrome)
 *         (0 if not)
*/
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - a program that check the palindrome
 *
 * @s: a pointer string
 * @start: int direction rtl
 * @end: int direction ltr
 * @mod: int
 *
 * Return: 0 or 1
 *
*/
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
