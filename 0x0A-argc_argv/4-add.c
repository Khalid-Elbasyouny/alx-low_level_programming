/**
 * main - a program that adds positive numbers.
 *
 * @argv: array .
 * @argc: int 'counter of command lines'
 *
 * Return: 0  (sucesss)
 *
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
			if (*a < '0' || *a > '9')
				return (printf("Error\n"), 1);
	}
	printf("%d\n", sum);
	return (0);
}
