#include "main.h"
#include <stdio.h>

/**
 * _puts -  function that prints a string
 *
 * @str: string parameter for print
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
