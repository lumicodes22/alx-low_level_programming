#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A binary string containing '0' and '1' characters.
 *
 * Return: The equivalent unsigned integer, or 0 if the input is valid.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0); /* Invalid input, return 0 */
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
