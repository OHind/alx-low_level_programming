#include "main.h"
#include <stdlib.h>
/**
 * _calloc - dynamically allocation
 * @nmemb: number
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	unsigned int i;
	char *ar1;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	ar1 = ar;
	for (i = 0; i < nmemb * size; i++)
		ar1[i] = 0;
	return (ar);
}
