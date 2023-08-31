#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *byte_pointer = (char *)&value;

	return (*byte_pointer == 1);
}
