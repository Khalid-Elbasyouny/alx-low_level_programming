#include "main.h"

/**
 * *_memcpy - a program that copies @n bytes from
 * memory area @src to memory area @dest
 *
 * @n:num of copies
 * @src: bytes from memory
 * @dest: to area
 *
 * Return: 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
