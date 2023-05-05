#include "main.h"
/**
 * cap_string - capitalize
 * @c: the string to modify
 * Return: the modified string
 */
char *cap_string(char *c)
{
	int i = 0;
	int p = 0;

	for (i = 0; *(c + i) != '\0', i++)
	{
		p = i - 1;
		if (*(c + i) >= 97 && *(c + i) <= 122)
		{
			if (i == 0)
				*(c + i) -= 32;
			else if (*(c + p) >= 9 && *(c + p) <= 10)
				*(c + i) -= 32;
			else if (*(c + p) >= 32 && *(c + p) <= 34)
				*(c + i) -= 32;
			else if (*(c + p) >= 40 && *(c + p) <= 41)
				*(c + i) -= 32;
			else if (*(c + p) == 46)
				*(c + i) -= 32;
			else if (*(c + p) == 59)
				*(c + i) -= 32;
			else if (*(c + p) == 123 || *(c + p)  125)
				*(c + i) -= 32;
		}
	}
	return (c);
}
