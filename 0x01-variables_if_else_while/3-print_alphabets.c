#include <stdio.h>
#include <string.h>
/**
 * main - entry point of the program
 * Return: returns 0
 */
int main(void)
{
        string buffer[50] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 51; i++)
        {
                putchar(buffer[i]);
        }
        putchar('\n');
        return (0);
}
