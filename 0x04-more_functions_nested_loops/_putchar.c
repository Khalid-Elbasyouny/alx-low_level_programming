#include "main.h"
#include <unistd.h>

/**
 * _putchar - stdout the char c 
 * 
 * @c: char that will print
 *
 * Return: 1 (success)
 * in error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
