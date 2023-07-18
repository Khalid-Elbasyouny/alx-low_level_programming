#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - A program that prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char a;

	for (a = 'a'; a >= 'z'; ++a)
	{
		_putchar(a);
	}
	_putchar('\n');
}
