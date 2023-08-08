#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *_strdup - a pointer to a newly allocated space in memory
 *
 * @str: a given string
 *
 * Return: 0  (sucesss)
 *
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == 0)
		return (0);
	for (; str[size] != '\0'; size++);
	n = malloc(size * sizeof(*str) + 1);
	if (n ==  0)
		return (0);
	else
	{
		for (; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
