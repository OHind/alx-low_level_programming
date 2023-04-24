#include <stdio.h>
/**
 * main - entry point of the program
 * Return: returns 0 always
 */
int main(void)
{
        char buffer1[16] = "0123456789abcdef";
        int i;

        for (i = 0; i < 16; i++)
        {
                putchar(buffer1[i]);
        }
        putchar('\n');
        return (0);
}
