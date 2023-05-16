#include "main.h"
#include <stdlib.h>
/**
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
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
	i = 0;
	ar = (char*) malloc((len1 + len2) * sizeof(char) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		*(ar + i) = *(s1 + i);
	}
	for (i = len1; i < (len2 + len1); i++)
	{
		*(ar + i) = *(s2 + i);
	}
	*(ar + i) = '\0';
	return (ar);

}
