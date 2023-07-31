#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a charecter in string
 * @s: string search
 * @c: char to find
 *
 * Return: Returns a pointer to the first occurrence of c
 * in the string s the is not found
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
