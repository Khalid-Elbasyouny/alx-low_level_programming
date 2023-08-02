#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  factorial - a program that returns the factorial of a given number.
 *
 * @n: the given number
 *
 * Return: 0
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
