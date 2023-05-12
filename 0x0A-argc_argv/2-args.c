#include <stdio.h>
/**
 * main - Prints all arguments that it receives
 * @argc: Number of arguments
 * @argv: array of all arguments
 * Return: 0;
 */
int main (int argc, char *argv[])
{
	for (i = 0; i < argc; i++)
	{
		printf ("the argument number %i is %s \n", argc, argv[i]);
	}
	return 0;
}
