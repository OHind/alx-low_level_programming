#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main (int argc, char **argv __attribute__((unused)))
{
	printf ("%d\n", argc);
	return 0;
}
