#include "main.h"

/**
 * *_strpbrk - a program that that searches a
 * string for any of a set of bytes.
 *
 * @s:string to search in
 * @accept:types to be searched for
 *
 * Return: pointer to the mached type (if success)
 * Null (no set matched)
*/
char *_strpbrk(char *s, char *accept)
{
	int indx;

	while (*s)
	{
		for (indx = 0; accept[indx]; indx++)
		{
			if (*s == accept[indx])
				return (s);
		}
		s++;
	}
	return ('\0');
}
