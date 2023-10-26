#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index at which to clear the bit (set to 0)
 *
 * Return: 1 if the operation was successful, 0r -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
