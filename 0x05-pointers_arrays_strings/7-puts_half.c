#include "main.h"

/**
 * put_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */
void put_half(char *str)

{

	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
k += 1;
	}
	else
	{
k = j / 2;
	}
	for (; k < j; k++)
	{
		_putchar(srt[k]);
	}
		_putchar('\0');
}
