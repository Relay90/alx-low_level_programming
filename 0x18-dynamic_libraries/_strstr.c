#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char * pattern = needle;

	if (*needle == '\0')
	{
		return (char *)haystack;
	}

	while (*haystack && *pattern && *haystack == *pattern)
	{
		haystack++;
		pattern++;
	}

	if (*pattern =='\0')
	{
		return (char *)start;
	}

	haystack = start + 1;

	return (NULL);
}
