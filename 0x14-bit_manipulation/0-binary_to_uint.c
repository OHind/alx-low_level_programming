#include "main.h"
#include <stdlib.h>
/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */

int power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;
	return (num);
}

/**
 * binary_to_uint - Binary to unsigned int
 * @b: Binary string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*(b + j) != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (*(b + j) != '0' && *(b + j) != '1')
		{
			return (0);
		}
		sum += (b[j] - '0') * power(2, i - j - 1);
	}
	return (sum);
}
