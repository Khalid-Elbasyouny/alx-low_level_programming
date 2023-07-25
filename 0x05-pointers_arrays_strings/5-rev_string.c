#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s:input string parameter
 *
 * Return: void
 *
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find length*/
	for (l = 0; s[l] != '\0'; ++i)
		;
	/* swap */
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*starts from 0*/
		s[l - 1 - i] = temp;
	}

}
