#include "main.h"
#include <stdio.h>
/**
 * _isalpha - A program that check alphabet in lower or case
 *
 * @c : intiger character in ASCII
 *
 * Return: 1 if lower , 0 if not  (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
