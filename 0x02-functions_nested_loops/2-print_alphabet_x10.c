#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - A program that prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a;
	char x;

	for (a = 0; a <= 10; a++)
	{
		for (x = 'a'; x <= 'z'; ++x)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
