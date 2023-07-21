#include "main.h"
#include <stdio.h>

/**
 * more_numbers - for in for loops
 *
 * Return: 0 ;
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('1');
			}
			_putchar(x % 10 + 48);
		}
		_putchar('\n')
	}
}
