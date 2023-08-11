#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *malloc_checked - a function that allocates memory
 *
 * @b: a given integer
 *
 * Return: pointer   (sucesss), else  98
 *
*/

void *malloc_checked(unsigned int b)
{
	int i = 0, size = 0;
	int *n;

	if (b == 0)
		exit(98);
	for (; size != '\0'; size++)
		;
	n = malloc(size * sizeof(b) + 1);
	if (n ==  0)
	{
		exit(98);
	}
	else
	{
		for (; i < size; i++)
			n[i] = i;
	}
	return (n);
}
