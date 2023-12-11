#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return 0
 */
int main(void)
{
	int result = _abs(-10);
	char c = 'A';

	printf("Hello, Dynamic Library!\n");
	printf("Absolute value of -10: %d\n", result);

	if (_isalpha(c))
	{
		printf("%c is an alphabetic character.\n", c);
	}
	else
	{
		printf("%c is not an alphabetic character.\n", c);
	}

	return (0);
}
