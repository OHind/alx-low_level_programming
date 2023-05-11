#include "main.h"
/**
 * is_prime_number - check if an integer is a prime number
 * @n: the number to verify
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - calculates if a number is prime recursively
 * @n: number to verify
 * @i: verify if numbers are the prime for n
 * Return: 0 or 1
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
