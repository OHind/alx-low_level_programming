#include "main.h"
/**
 * _memcpy - copy a string into another
 * @dest: the string to copy to
 * @src: the string to copy to
 * @n: number of bytes to copy
 * Return: the modified string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
