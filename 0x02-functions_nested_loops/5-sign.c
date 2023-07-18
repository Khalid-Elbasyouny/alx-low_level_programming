#include "main.h"
#include <stdio.h>
/**
 * print_sign - A program that check alphabet in lower case
 *
 * @n : intiger character in ASCII
 *
 * Return: 1 if lower , 0 if not  (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}