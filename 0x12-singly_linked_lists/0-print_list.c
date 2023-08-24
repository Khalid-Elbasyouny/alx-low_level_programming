#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @x: pointer to the list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *x)
{
	size_t s = 0;

	while (x)
	{
		if (!x->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", x->len, x->str);
		x = x->next;
		s++;
	}
	return (s);
}
