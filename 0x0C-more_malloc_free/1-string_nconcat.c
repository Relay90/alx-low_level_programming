#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenate two string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: is greater or equal to the length of s2 then use the entire string s2
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, char1 = 0, char2 = 0;

	while (s1 && s1[char1])
		char1++;
	while (s2 && s2[char2])
		char2++;

	if (n < char2)
		s = malloc(sizeof(char) * (char1 + n + 1));
	else
		s = malloc(sizeof(char) * (char1 + char2 + 1));

	if (!s)
		return (NULL);

	while (i < char1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < char2 && i < (char1 + n))
		s[i++] = s2[j++];

	while (n >= char2 && i < (char1 + char2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

