#include <stdio.h>
/**
 * main -entry point of the program
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('48', i);
	}
	printf("\n");
	return (0);
}
