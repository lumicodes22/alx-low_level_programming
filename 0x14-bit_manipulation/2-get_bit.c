#include"main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check bits in.
 * @index: The index at which to check the bit.
 *
 * Return: The value of the bit at the specified index, or -1
 * if there an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
