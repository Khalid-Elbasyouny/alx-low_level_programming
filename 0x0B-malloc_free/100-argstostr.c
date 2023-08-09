#include "main.h"

/**
 * _strlen - function that find the string length
 *
 * @s: a given string
 *
 * Return: int for the length
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: int counter
 * @av: char for argument
 *
 * Return: pointer if sucess ,
 *		if not NULL
 *
*/
char *argstostr(int ac, char **av)
{
	int i = 0;
	int nc = 0;
	int j = 0;
	int mtd = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; i < ac; i++, nc++)
	{
		nc = nc + _strlen(av[i]);
	}
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, mtd++)
			s[mtd] = av[i][j];
		s[mtd] = '\n';
		mtd++;
	}
	s[mtd] = '\0';
	return (s);
}
