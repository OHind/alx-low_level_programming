#include "main.h"
/**
 * puts2 - print every other caracter
 * @str: string to print
 * Return: Always 0;
 */
void puts2(char *str)
{
	int l = 0;
	int i = 0;

	while (*(str + l) != '\0')
	{
		l++;
	}
	while (i < l)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
