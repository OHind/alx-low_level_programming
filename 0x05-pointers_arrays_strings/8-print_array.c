#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: array to print
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int l = 0;
	int i = 0;

	while (a[l] != '\0')
	{
		l++;
	}
	if (n < l)
	{
		while (i < n)
		{
			if (i == 0)
				printf("%d", a[i]);
			else
				printf(", %d", a[i]);
			i++;
		}
	}
	printf("\n");
}
