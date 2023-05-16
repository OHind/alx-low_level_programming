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
	unsigned int len1 = 0, len2 = 0, len3 = 0, i = 0;
	char *ar;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}
	len3 = len1 + len2;
	ar = (char *) malloc(len3 * sizeof(char) + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ar[i] = s1[i];
	for (i = 0; i < len2; i++)
		ar[i + len1] = s2[i];

	return (ar);

}
