#include <stdlib.h>
#include <stdio.h>


/**
 * main - a program that the minimum number of coins
 * to make change for an amount of money
 *
 * @argv: array .
 * @argc: int 'counter of command lines'
 *
 * Return: 0  (sucesss)
 *
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, addcents = 0, cash = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (cash >= cents[i])
			{
				addcents += cash / cents[i];
				cash = cash % cents[i];
				if (cash % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", addcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
