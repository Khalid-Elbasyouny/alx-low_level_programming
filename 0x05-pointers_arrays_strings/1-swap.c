#include "main.h"
#include <stdio.h>

/**
 * swap_int - a func to swap two int's
 *
 *@a: first int
 *@b: second int
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
