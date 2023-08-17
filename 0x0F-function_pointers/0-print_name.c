#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name. 
 *@f: pointer to print function
 *@name: string name
 * 
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name  && f)
		f(name);
}
