#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[count] - '0');
	}

	return (dec_val);
}
