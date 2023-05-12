#include <stdio.h>
#include <stdlib.h>
/**
 * check_int - is input a number
 * @s: argument to verufy
 * Return: 1 or 0
 */

int check_int(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - adding a positive number
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum, is_num;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			is_num = check_number(argv[i]);
			if (is_num == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
