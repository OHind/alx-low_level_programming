#include "main.h"
/**
 * _puts - dispaly a string
 * @str: the string to display
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
