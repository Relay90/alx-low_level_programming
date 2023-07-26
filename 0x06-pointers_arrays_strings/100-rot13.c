#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: check string params
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char alpha1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha2[] = "QWERTYUIOPLKJHGFDSAZXCVBNMmnbvcxzasdfghjklpoiuytrewq";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
		if (s[i] == alpha1[j])
		{
			s[i] = alpha2[j];
			break;
		}
		}
	}
	return (s);
}
