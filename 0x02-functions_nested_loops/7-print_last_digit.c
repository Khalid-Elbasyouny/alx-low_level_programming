#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - A function that prints the last digit of a number.
 *
 * @j : intiger character in ASCII
 *
 * Return: intiger the last digit
 */
int print_last_digit(int j)
{
	int x;

	x = j % 10;
	if (j < 0)
	{
		_putchar(-x + '0');
		return (-x);
	}
	else
	{
		_putchar(x + '0');
		return (x);
	}
	_putchar('\n');
}
