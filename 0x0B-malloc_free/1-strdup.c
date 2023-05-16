#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a strin to a newly allocated memory
 * @str: source string
 * Return: return array
 *
 */
char *_strdup(char *str)
{
	unsigned int len = 0, i = 0;
	char *ar;

	if (str == NULL)
		return (NULL);
	while (*(str + len) != '\0')
	{
		len++;
	}
	ar = (char *) malloc(len * sizeof(char) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	if (len != 0)
	{
		for (i = 0; i < len; i++)
		{
			*(ar + i) = *(str + i);
		}
		*(ar + i) = '\0';
		return (ar);
	}
	else
	{
		return (NULL);
	}


}
