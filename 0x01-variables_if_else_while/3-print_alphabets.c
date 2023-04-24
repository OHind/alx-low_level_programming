#include <stdio.h>
/**
 * main - entry point of the program
 * Return: returns 0
 */
int main(void)
{
        char buffer1[26] = "abcdefghijklmnopqrstuvwxyz";
	char buffer2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

        for (i = 0; i < 26; i++)
        {
                putchar(buffer1[i]);
        }
	for (j = 0; j < 26; j++)
	{
		putchar(buffer2[j]);
	}
        putchar('\n');
        return (0);
}
