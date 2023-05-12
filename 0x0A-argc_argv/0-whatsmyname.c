#include "main.h"
#include <stdio.h>
/**
 * main - to print the program's name
 * @argc: numebr of arguments
 * @argv: the array to store arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
