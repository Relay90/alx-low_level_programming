/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to find the absolute value of
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n); /* Return the negation of n if it's negative */
	}
	else
	{
		return (n); /* Return n if it's already non-negative */
	}
}
