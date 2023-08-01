#include "main.h"

/**
 * print_diagsums - a program that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a:string to search in
 * @size:
 *
 * Return: void
*/
void print_diagsums(int *a, int size)
{
	int indx, sumi = 0, sumii = 0;

	for (indx = 0; indx < size; indx++)
	{
		sumi += a[indx];
		a += size;
	}
	a -= size;
	for (indx = 0; indx < size; indx++)
	{
		sumii += a[indx];
		a -= size;
	}
	printf("%d, %d\n", sumi, sumii);
}
