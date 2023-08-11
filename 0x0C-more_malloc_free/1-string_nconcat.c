#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @n: num of bytes from s2
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer  (sucesss), else NULL
 *
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len, s2_len, i, j;

	/*check s1, s2*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*calc length*/
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	/*memory allocation*/
	str = malloc(s1_len + n + 1);
	/*check str*/
	if (str == NULL)
		return (NULL);
	/*add s1, s2 to str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n ; j++)
	{
		str[i] = s2[j];
		i++;
	}
	/* pointer return value*/
	str[i] = '\0';
	return (str);
}
