#include "main.h"
/**
 * _memset - Fill a block of memory with a specific value
 * @s: the string to modify
 * @b: caracter to add
 * @n: Number of bits to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
