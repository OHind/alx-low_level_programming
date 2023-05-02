#include "main.h"
#include <stdio.h>
/**
 * _strlen - the lenght of a char
 * @s: teh string to get its lenght
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s+i) != '\0')
	{
		i++;
	}
	return (i);
}
