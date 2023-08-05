/**
 * main - a program prints all arguments it receives.
 *
 * @argv: array .
 * @argc: int 'counter of command lines'
 *
 * Return: 0  (sucesss)
 *
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
