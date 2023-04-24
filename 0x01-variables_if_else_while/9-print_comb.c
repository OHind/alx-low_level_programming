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
		putchar('48' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('48' + i);
	return (0);
}
