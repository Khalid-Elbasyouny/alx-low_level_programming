#include "main.h"

/**
 * _isupper - c function that chick the alphabet case 
 *
 * @c: char to check
 *
 * Return: 1 is upper ,0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(1);
	else 
		return(0);
}
