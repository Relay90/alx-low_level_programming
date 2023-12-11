#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in s of any character in accept.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing characters to search for.
 *
 * Return: Pointer to the first occurrence of any character from accept in s,
 * or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp = accept;

		while (*temp)
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}

		s++;
	}

	return (NULL);
}
