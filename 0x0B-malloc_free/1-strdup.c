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

	while (*(str + len) != 0)
	{
		len++;
	}
	ar = (char *) malloc(len * sizeof(char));
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
		return (ar);
	}
	else
	{
		return (NULL);
	}


}
