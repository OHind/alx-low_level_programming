#include "main.h"
/**
 * _pow_recursion - te power
 * @x: first argument
 * @y: second argument
 * Return: a value
 */
int _pow_recursion(int x, int y)
{
	if ( y >= 0)
	{
		return (x * _pow_recursion(x , y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
