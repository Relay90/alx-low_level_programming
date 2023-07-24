#include "main.h"

/**
 * put_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */
void put_half(char *str)
{
	int a, n, i;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		i++;
	n = (i / 2);
	if ((i % 2) == 1)
		n = ((i + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
