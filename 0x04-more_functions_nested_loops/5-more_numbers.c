#include "main.h"

/**
 * more_numbers - prints numbers 0-9
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int k = 0;

	while (k < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 0)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
		k++;
	}
}
