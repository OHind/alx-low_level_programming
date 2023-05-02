#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: a reversed string
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int l = 0;
	char inter;

	while (*(s + l) != '\0')
	{
		l++;
	}
	i = l - 1;
	while (j < l / 2)
	{
		inter = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = inter;
		i--;
		j++;
	}

}
