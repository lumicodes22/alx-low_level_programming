#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to modify
 * @index: The index at which to clear the bit
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
