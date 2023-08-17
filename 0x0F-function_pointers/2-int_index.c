#include "function_pointers.h"
#include <stdlib.h>

/**
*  int_index - a function that searches for an integer.
*
* @array: array of ints
* @size: the array size
* @cmp:compaire function
*
* Return: 0  (sucesss)
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
