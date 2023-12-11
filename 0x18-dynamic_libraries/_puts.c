#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to the standard output
 * @s: pointer to the string to be printed
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
