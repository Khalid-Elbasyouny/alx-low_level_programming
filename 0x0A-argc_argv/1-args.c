#include <stdlib.h>
#include <stdio.h>


/**
 * main - a program that prints the number of arguments passed
 *
 * @argv: array .
 * @argc: int 'counter of command lines'
 *
 * Return: 0  (sucesss)
 *
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
