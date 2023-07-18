#include "main.h"
#include <stdio.h>
/**
 * _islower - A program that prints alphabet in lower case
 *
 * @c - intiger character in ASCII
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c <= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
