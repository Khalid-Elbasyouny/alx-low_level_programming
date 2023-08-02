#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _pow_recursion - a program that returns the value of
 * x raised to the power of y.
 *
 * @x: a given number  //base
 * @y: a given number  //power
 *
 * Return: the same function till it ends
*/
int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
