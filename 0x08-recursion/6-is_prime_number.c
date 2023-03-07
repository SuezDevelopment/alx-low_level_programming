#include "main.h"
int calculate_prime(int num_, int inf);

/**
 * is_prime_number - function that  returns 1 if the input integer is a prime.
 *@n: first value
 *
 * Return: Return solution
 */


int is_prime_number(int n)
{
	int a = 2;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (calculate_prime(n, a));
}

/**
 * calculate_prime - function that returns 1 if the input integer is a prime.
 *@num_: first value
 *@inf: second value
 *
 * Return: Return solution
 */

int calculate_prime(int num_, int inf)
{
	if (num_ / 2 < inf)
		return (1);
	if (num_ % inf == 0)
		return (0);
	return (calculate_prime(num_, inf + 1));
}
