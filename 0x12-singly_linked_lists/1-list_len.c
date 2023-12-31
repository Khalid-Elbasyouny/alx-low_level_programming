#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @x: pointer to the list_t list
 *
 * Return: number of elements in x
 */
size_t list_len(const list_t *x)
{
	size_t n = 0;

	while (x)
	{
		n++;
		x = x->next;
	}
	return (n);
}

