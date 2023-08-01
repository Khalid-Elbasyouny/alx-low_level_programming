#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory aria that will be filed
 * @b: char to copy
 * @n: times will copy
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	s[1] = b;
}
return (s);
}
