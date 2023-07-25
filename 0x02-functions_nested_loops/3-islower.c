#include "main.h"
/**
 * _islower - checkes for lowercase charecter
 * @c: the charecterto be checked
 * Return: 1 for lowercase charecter or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
