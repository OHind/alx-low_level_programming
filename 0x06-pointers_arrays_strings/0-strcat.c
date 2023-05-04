#include "main.h"
/**
 * _strcat - append desination string to a source string
 * @dest: destination string
 * @src: source string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int ldest, lsrc;

	ldest = 0;
	lsrc = 0;

	while (dest[ldest] != '\0')
		ldest++;

	while (src[lsrc] != '\0')
	{
		dest[ldest] = src[lsrc];
		lsrc++;
		ldest++;
	}

	dest[ldest] = '\0';

	return (dest);
}
