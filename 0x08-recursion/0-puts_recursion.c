#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string
 * @s: print string
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	_puts_recursion(s + 1);
}
