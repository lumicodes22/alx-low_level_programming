#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to
 * transform one number into another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
