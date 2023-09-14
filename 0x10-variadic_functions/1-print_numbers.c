#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a series of numbers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function takes a variable number of integer arguments
 * and prints them to the standard output separated by the specified separator.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
