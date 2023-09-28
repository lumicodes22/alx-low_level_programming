#include "main.h"

/**
 * set_bit - Sets the value of a bit at a specified index to 1 in an unsigned
 * long integer.
 * @n: A pointer to an unsigned long interger where the bit will be set.
 * @index: The index of the bit to set (0-based).
 *
 * Return: 1 if it the bit was successfully set, or -1 if the index is out of
 * range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
