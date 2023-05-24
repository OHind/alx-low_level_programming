#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function as a parameter
 * @array: parameter of every call of a function
 * @size: size of the array
 * @action: a pointer to the used function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
