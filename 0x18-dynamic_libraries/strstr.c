#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in haystack.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the first occurrence of the substring needle in haystack,
 * or NULL if needle is not found in haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
        char *n = needle;

	while (*haystack)
	{
		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
