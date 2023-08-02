#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _sqrt_recursion - a program that returns
 * the natural square root of a number.
 * @n: a given number
 * @rus: squre
 *
 * Return:int (natural sqare found)
 *            (-1 if not)
*/
int sqr(int n, int rus);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - a program that return the squre root
 *
 * @n: a given number
 * @rus: squre
 *
 * Return: int (natural sqare found)
 *         (-1 if not)
*/
int sqr(int n, int rus)
{
	if (rus * rus == n)
	{
		return (rus);
	}
	else if (rus * rus < n)
	{
		return (sqr(n, rus + 1));
	}
	else
		return (-1);
}
