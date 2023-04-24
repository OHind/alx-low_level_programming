#include <stdio.h>
/**
 * main - entry point of the program
 * Return: returns 0 always
 */
int main(void)
{
	char buffer1[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(buffer1[i]);
	}
	putchar('\n');
	return (0);
}
