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

	printf("Size of a char: ", sizeof(char), "byte(s)");
	printf("Size of an int: \n", sizeof(i));
	printf("Size of a long int: \n", sizeof(li));
	printf("Size of a long long int: \n", sizeof(lli));
	printf("Size of a float: \n", sizeof(f));
	return (0);
}
