#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion - a program that print a string  followed by a new line.
 *
 * @s: the char we want to print
 *
 * Return: the function it self
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
