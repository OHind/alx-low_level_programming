#include "main.h"

/**
 * _isupper - verify if a caracter is uper case
 * @c: caracter to verify
 * Return: 1 is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
