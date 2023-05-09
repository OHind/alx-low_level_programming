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

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}	
			j++;
		}
		i++;
	}
	return (NULL);

}
