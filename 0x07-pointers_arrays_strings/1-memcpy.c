#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: memery are to copy from
 * @n: bytes from memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
