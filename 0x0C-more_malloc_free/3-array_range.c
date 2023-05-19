#include "main.h"
#include <stdlib.h>
/**
 * *array_range - Array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ar = malloc(sizeof(int) * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ar[i] = min++;
	return (ar);
}
