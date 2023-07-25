#include "main.h"
#include <stdio.h>

/**
 * puts_half -  a function that prints n
 * elements of an array of integers,
 *
 * @str: string parameter
 * Return: void
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
