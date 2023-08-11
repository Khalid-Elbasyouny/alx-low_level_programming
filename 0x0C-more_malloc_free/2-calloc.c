#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  *_memoset - a function that fill the memory
 *
 * @s: pointer
 * @c: the char to set
 * @n: maxmun amount of bytes
 *
 * Return: pointer  (sucesss)
 *
*/

char *_memoset(char *s, char c, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = c;
	return (ptr);
}

/**
 * _calloc - a function that  allocates memory for an array
 *
 * @nmemb: a
 * @size: a
 * Return: pointer  (sucesss)
 *
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memoset(m, 0, sizeof(int) * nmemb + 1);

	return (m);
}
