#include <stdio.h>
#include <stdlib.h>

/**
 * main - number of coins
 * @argc: number of arguments
 * @argv: pointer to  arguments
 * Return: 0 , 1
 */
int main(int argc, char *argv[])
{
	int n, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			result++;
			n -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
