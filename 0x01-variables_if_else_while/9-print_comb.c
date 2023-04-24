#include <stdio.h>
/**
 * main -entry point of the program
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar(i);
	return (0);
}
