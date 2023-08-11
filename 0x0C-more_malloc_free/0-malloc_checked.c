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
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
