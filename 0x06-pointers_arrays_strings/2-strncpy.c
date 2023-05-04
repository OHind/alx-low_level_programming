#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: string modified
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lsrc = 0;

	while (*(src + lsrc) != '\0' && lsrc < n)
	{
		*(dest + lsrc) = *(src + lsrc);
		lsrc++;
	}
	while (lsrc < n)
	{
		*(dest + lsrc) = '\0';
		lsrc++;
	}
	return (dest);
}
