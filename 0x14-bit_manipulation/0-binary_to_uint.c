#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int val;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (val = 0; b[val]; val++)
	{
		if (b[val] < '0' || b[val] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[val] - '0');
	}

	return (dec_val);
}

