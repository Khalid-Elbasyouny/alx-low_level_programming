#include "main.h"

/**
 * _strlen - function that find the string length
 *
 * @s: a given string
 *
 * Return: int for the length
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: first strings
 * @s2: second strings
 *
 * Return: pointer (sucesss)
 *
*/

char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2, i;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	n = malloc((size_s1 + size_s2) * sizeof(char) + 1);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i <= size_s1 + size_s2 ; i++)
	{
		if (i < size_s1)
		{
			n[i] = s1[i];
		}
		else
		{
			n[i] = s2[i - size_s1];
		}
	}
	n[i] = '\0';
	return (n);
}
