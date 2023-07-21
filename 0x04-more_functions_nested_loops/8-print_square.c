#include "main.h"
#include <stdio.h>

/**
 * print_square - a func that  draws a diagonal line
 *
 * @size: number of '#' will be printed hight and width
 *
 * Return: Always 0
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
