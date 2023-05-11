int _check_sqrt(int p, int j);
/**
 * _check_sqrt - the square root of a number
 * @p: number to calculate the square number
 * @j: natural to iterate
 * Return: The square root
 */
int _check_sqrt(int p, int j)
{
	if (j * j > p)
	{
		return (-1);
	}
	if (j * j == p)
	{
		return (j);
	}
	return (_check_sqrt(p, j + 1));
}


/**
 * _sqrt_recursion - the square root of a number
 * @n: the number
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_check_sqrt(n, 0));
	}
}
