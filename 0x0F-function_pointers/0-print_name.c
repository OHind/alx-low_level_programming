#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: the name to print
 * @f: pointer to function f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

