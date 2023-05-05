#include "main.h"
/**
 * reverse_array - Reverse array of integers
 * @a: array of integers to reverse
 * @n: Number of elemnts to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int inter;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		inter = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = inter;
		j--;
	}
}
