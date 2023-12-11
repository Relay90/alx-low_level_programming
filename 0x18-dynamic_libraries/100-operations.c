#include <stdio.h>

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts one integer from another
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of subtracting b from a
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides one integer by another
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the result of a divided by b
 *         or 0 if division by zero is attempted
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error! Division by zero is not allowed.\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - computes the remainder of the division of two integers
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the remainder of a divided by b
 *         or 0 if modulo by zero is attempted
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error! Modulo by zero is not allowed.\n");
		return (0);
	}
	return (a % b);
}
