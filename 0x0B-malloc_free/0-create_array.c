#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create array
 * @size: number of array
 * @c: caracter to fill
 * Return: return the array of value
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(ar + i) = c;
		}
		return (ar);
	}
	else
	{
		return (NULL);
	}
}
