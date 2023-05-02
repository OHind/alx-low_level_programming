#include "main.h"
/**
 * _strcpy - Copies a string into a string
 * @dest: the destination string
 * @src: the source string
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	while (i < l)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);

}
