#include "main.h"
#include <stdio.h>
/**
 * _abs- A program that computes the absolute value of an integer.
 *
 * @s : intiger character
 *
 * Return: intiger for the absoulute value
 */
int _abs(int s)
{
	if (s >= 0)
	{
		return (s);
	}
	else
	{
	return (s * -1);
	}
	_putchar('\n');
}
