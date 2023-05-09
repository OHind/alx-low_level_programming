#include "main.h"
#define NULL 0
/**
 * _strpbrk - detect the first occurrence of any caracter of the argument
 * @s: the source string
 * @accept: the check
 * Return: the source string starting from the occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
