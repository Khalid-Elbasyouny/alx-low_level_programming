#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code
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
			_putchar(x + 48);
		}
	}
	_putchar('\n');
}
