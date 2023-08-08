#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - a program that  creates an array of chars,
 *  and initializes it with a specific char.
 *
 * @size: the array size
 * @c: char to initialize
 *
 * Return: pointer  (sucess)
 *         NULL if not
 *
*/

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
	{
		return (0);
	}
	while (size--)
	{
		i[size] = c;
	}
	return (i);
}
