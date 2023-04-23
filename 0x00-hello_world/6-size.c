#include <stdio.h>
/**
 * main - the entry point of the program
 *
 * Return: always successful
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long lli;
	float f;

	printf("Size of a char: %c", sizeof(c), "byte(s)\n");
	printf("Size of an int: %d", sizeof(i), "byte(s)\n");
	printf("Size of a long int: %d", sizeof(li), "byte(s)\n");
	printf("Size of a long long int: %d", sizeof(lli), "byte(s)\n");
	printf("Size of a float: %f", sizeof(f), "byte(s)\n");
	return (0);
}
