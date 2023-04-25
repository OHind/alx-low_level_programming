#include "main.h"
/**
 * _abs - compute tehe absolute value
 * @n: the integer
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
	_putchar('\n');
}
