#include "main.h"

/**
 * _isdigit - verify if a caracter is uper case
 * @c: integer to verify
 * Return: 1 is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
