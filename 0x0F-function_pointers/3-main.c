#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - the entry point of a program
 * @argc: number of aruments
 * @argv: array of arguments
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int x, y, r;
	int (*op)(int, int);
	char o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	o = argv[2];
	if ((o == '/' || o == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = op(x, y);
	printf("%d\n", r);
	return (0);
}
