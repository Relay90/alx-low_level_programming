#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string
 * @s: print string
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar('\n');
	_puts_recursion(s = 1);
}
