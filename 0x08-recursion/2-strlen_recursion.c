#include "main.h"
/**
 * _strlen_recursion - the lenght of a string
 * @s: the string to calculate its lenght
 * Return: the lenght of teh string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}

}
