#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_prime_number - a program that returns:
 * (1) if the input integer is a prime number,
 * otherwise return (0).
 *
 * @v: int
 * @n: a given number
 *
 * Return: 1 (prime)
 *         (0 if not)
*/
int prime_checker(int n, int v);
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}
/**
 * prime_checker - a program that returns:
 * (1) if the input integer is a prime number,
 * otherwise return (0).
 *
 * @n: a given number
 * @v: int
 *
 * Return: 1(prime) , 0(not prime)
*/
int prime_checker(int n, int v)
{
	if (v >= n && n > 1)
		return (1);
	else if (n % v == 0 || n <= 1)
		return (0);
	else
		return (prime_checker(n, v + 1));
}
