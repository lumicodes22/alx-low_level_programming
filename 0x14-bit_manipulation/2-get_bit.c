#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specified index in sn unsigned
 * long integer.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index, 0r -1 if the index is
 * out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}

	return (-1);
}
