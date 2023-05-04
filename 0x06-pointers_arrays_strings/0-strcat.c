#include "main.h"
/**
 * _strcat - append desination string to a source string
 * @dest: destination string
 * @src: source string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int ldest = 0;
	int lsrc = 0;
	int i = 0;
	int j = 0;

	while (*(src + lsrc) != '\0')
	{
		lsrc++;
	}
	while (*(dest + ldest) != '\0')
	{
		ldest++;
	}
	for (i = 0; i < lsrc; i++)
	{
		*(dest + ldest + i) = *(src + j);
		j++;	
	}
	*(dest + ldest + i) = '\0';
	return (dest);

		
}
