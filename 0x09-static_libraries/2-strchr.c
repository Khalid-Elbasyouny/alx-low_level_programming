#include "main.h"

/**
 * *_strchr- a program that locate char in a string
 *
 * @s: string for search
 * @c: char to locate
 *
 * Return: when found pointer to the first occurence
 * Null if not
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
