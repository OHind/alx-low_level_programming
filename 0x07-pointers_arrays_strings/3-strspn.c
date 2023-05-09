#include "main.h"
/**
 * _strspn - the byte of a source string that consists a second string
 * @s: the original string
 * @accept: the looking for
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int num = 0;
	int fnum = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		fnum = num
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				num++;
			}
		}
		i++;
	}
	return (fnum);
}
