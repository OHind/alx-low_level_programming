#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplicate two numbers
 * @argc: the number of argumenst
 * @argv: the array of arguments
 * Return: Return the result of the multiplication of two integers
 */
int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
