#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: Second string
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, len3 = 0;
	char *ar;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	len1 = i;
	i = 0;
	while (*(s2 + i) != '\0')
	{
		i++;
	}
	len2 = i;
	len3 = len1 + len2;
	i = 0;
	ar = (char *) malloc(len3 * sizeof(char) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		*(ar + i) = *(s1 + i);
	}
	i = 0;
	for (i = 0; i < len2; i++)
	{
		*(ar + i + len1) = *(s2 + i);
	}
	*(ar + i) = '\0';
	return (ar);

}
