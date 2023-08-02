#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen_recursion - a program that returns the length of a string.
 *
 * @s: the string we need to know length
 *
 * Return: the function it self recurally till the length comes.
*/
int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s > '\0')
	{
		cont += _strlen_recursion(s + 1) + 1;
	}
	return (cont);
}
