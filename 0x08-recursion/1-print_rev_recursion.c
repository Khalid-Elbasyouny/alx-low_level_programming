#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  _print_rev_recursion - a program that  prints a string in reverse.
 *
 * @s: the given char
 *
 * Return: the same function till ends
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
