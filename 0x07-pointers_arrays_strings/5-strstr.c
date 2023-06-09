#include "main.h"
#define NULL 0
/**
 * _strstr - Find the new occurence of the substring
 * @haystack: the source string
 * @needle:the substring
 * Return: modified string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
