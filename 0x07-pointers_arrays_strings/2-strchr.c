#include "main.h"
#define NULL 0
/**
 * _strchr - the occurence of a caracter
 * @s: the caracter to look for the caracter into
 * @c: the caracter to look for
 * Return: the first occurence of the caracter
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
