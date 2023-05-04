#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination strings
 * @src: source strings
 * @n: n number
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int ldest, j;

	ldest = 0;
	j = 0;

	while (dest[ldest] != '\0')
		ldest++;

	while (src[j] != '\0' && j < n)
	{
		dest[ldest] = src[j];
		i++;
		j++;
	}

	dest[ldest] = '\0';

	return (dest);
}
