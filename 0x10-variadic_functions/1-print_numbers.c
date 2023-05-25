#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: the char separator
 * @n: arguments
 * Returns: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(p, int));
		}
		else if (separator != NULL && i == 0)
		{
			printf("%d", va_arg(p, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(p, int));
		}
	}
	va_end(p);
	printf("\n");
}
