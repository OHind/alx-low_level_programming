#include <stdio.h>
/**
 * main - adding a positive number
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int i = 0;
	int add = 0;

	if (argc == 1)
		printf ("ERROR \n");
	else
		for (i = 0; i < argc; i++)
		{
			add += argv[i];
		}
		printf ("the addition of arguments is %d \n ",add);
}
