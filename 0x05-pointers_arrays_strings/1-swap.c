#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: always successful
 */
void swap_int(int *a, int *b)
{
	int inter;

	inter = *a;
	*a = *b;
	*b = inter;

}
