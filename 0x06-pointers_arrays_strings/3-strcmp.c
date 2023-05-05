#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: First string
 * @s2: Ssecond string
 * Return: Integer depending on the comparison of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
