#include "main.h"
#include <stdio.h>

/**
 * error_file - Checks if files can be opened and handles errors.
 * @file_from: Files descriptor of the source file.
 * @file_to: File descriptor of the destination file
 * @argv: Arguements vector containing file names.
 *
 * This function checks if files can be opened for reading or writing and 
 * handles error by printing error messages to stderr and existing with
 * appropriate exist codes
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
