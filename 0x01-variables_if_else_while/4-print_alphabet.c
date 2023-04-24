#include <stdio.h>
/**
 * main - entry point of the program
 * Return: returns 0 always
 */
int main(void)
{
	char buffer1[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(buffer1[i]);
	}
	putchar('\n');
	return (0);
}
