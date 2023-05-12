#include <stdio.h>
/**
 * main - multiplicate two numbers
 * @argc: the number of argumenst
 * @argv: the array of arguments
 * Return: Return the result of the multiplication of two integers
 */
int main (int argc, char **argv)
{
	if (argc < 3)
		printf ("ERROR \n");
		return 1;
	else
		printf ("%d \n", argv[0] * argv[1]);
		return 0;
}
