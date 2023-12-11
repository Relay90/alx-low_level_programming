#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 * consisting entirely of characters from accept.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	char *temp = accept;

	while (*s)
	{
		found = 0;
		while (*temp)
		{
			if (*s == *temp)
			{
				found = 1;
				break;
			}
			temp++;
		}

		if (found == 0)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
