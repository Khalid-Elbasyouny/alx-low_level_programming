#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - check the code
 *
 * Return: 0 ;
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
