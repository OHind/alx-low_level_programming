#include "main.h"
/**
 * string_toupper - changes lower cases to upper
 * @c: string to modify
 * Return: array of upper cases
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 97 && *(c + i) <= 122)
		{
			*(c + i) = *(c + i) - 32;
		}
		i++;
	}
	return (c);
}
