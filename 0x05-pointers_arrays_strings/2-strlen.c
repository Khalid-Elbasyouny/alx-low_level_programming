#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: the char we want to know its length
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
