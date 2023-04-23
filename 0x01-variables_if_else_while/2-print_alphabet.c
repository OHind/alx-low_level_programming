#include <stdio.h>
/**
 *
 * main - entry point of the program
 *
 * Return: returns 0
 */
int main(void)
{
	char buffer[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i < 26; i++)
	{
		putchar(buffer[i]);
	}
	return (0);
}
