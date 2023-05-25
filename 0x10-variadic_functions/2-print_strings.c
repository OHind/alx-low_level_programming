#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - print numbers
 * @separator: the char separator
 * @n: arguments
 * Returns: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *s;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (!s)
		{
			s = "(nil)";
		}
		if (separator == NULL)
		{
			printf("%s", s);
		}
		else if (separator != NULL && i == 0)
		{
			printf("%s", s);
		}
		else
		{
			printf("%s%s", separator, s);
		}
	}
	va_end(p);
	printf("\n");
}
