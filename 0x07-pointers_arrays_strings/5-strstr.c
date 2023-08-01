#include "main.h"

/**
 * _strstr - a program that locates a supstring.
 *
 * @haystack:string to search in
 * @needle:sup string to be located
 *
 * Return: pointer to the start of the needed supstring (if success)
 * Null (no set matched)
*/
char *_strstr(char *haystack, char *needle)
{
	int indx;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		indx = 0;
		if (needle[indx] == needle[indx])
		{
			do {
				if (needle[indx + 1] == '\0')
					return (haystack);
				indx++;
			} while (haystack[indx] == needle[indx]);
		}
		haystack++;
	}
	return ('\0');
}
