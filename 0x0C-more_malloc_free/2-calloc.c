#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * 
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: void pointer to array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *v;

	if (!nmemb || !size)
		return (NULL);
	v = malloc(nmemb * size);
	if (!v)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		v[nmemb] = 0;
	return (v);
}
