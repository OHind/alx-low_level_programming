#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print half of
 * Return: Always successful
 */
void puts_half(char *str)
{
	int i = 0;
	int l = 0;

	while (*(str + l) != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		i = l / 2;
		while (i < l)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	else
	{
		i = (l / 2) + 1;
		while (i < l)
		{
 			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
