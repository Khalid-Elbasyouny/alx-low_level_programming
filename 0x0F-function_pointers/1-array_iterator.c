#include "function_pointers.h"

/**
* array_iterator - a function that executes a function given as a parameter
*
* @size:size of the array
* @array:int array
* @action: pointer to the function you need to use
*
* Return: void`
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
