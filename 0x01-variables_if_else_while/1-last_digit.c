#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the last digit and check it
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 6)
	printf("Last digit of %i is %i is greater than 6 ", n, n % 10);
else if (n % 10 == 0)
	printf("Last digit of %i is %i and is 0", n, n % 10);
else
	printf("Last digit of %i is %i and is less than 6 and not 0", n, n % 10);
return (0);
}
