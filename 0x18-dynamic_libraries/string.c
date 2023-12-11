#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer where the string will be copied.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++) != '\0')
		;

	return (temp);
}

/**
 * _strcat - Concatenates the string pointed to by src onto the end of the string
 *           pointed to by dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while ((*dest++ = *src++) != '\0')
		;

	return (temp);
}

/**
 * _strncat - Concatenates at most n characters from src onto the end of dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 * @n: Maximum number of characters to concatenate.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (n-- > 0 && *src != '\0')
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}

/**
 * _strncpy - Copies at most n characters from src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be copied.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (n-- > 0 && *src != '\0')
		*dest++ = *src++;

	while (n-- > 0)
		*dest++ = '\0';

	return (temp);
}

/**
 * _strchr - Finds the first occurrence of character c in string s.
 * @s: Pointer to the string to be searched.
 * @c: Character to search for.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
