#include "main.h"
/**
 * leet - change some caracters
 * @c: string to change
 * Return: the modified string
 */
char *leet(char *c)
{
	int i, j;

	char *src = "aAeEoOtTlL";
	char *des = "4433007711";

	for (i = 0; *(c + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(c + i) == *(src + j))
			{
				*(c + i) = *(des + j);
			}
		}
	}
	return (c);
}
