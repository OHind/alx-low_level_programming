#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sum them all
 * @n: arguments
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
		int sum = 0;
		va_list p;
		unsigned int i;

		if (n == 0)
		{
			return (0);
		}
		va_start(p, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(p, unsigned int);
		}
		va_end(p);
		return (sum);
}
