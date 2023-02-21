#include <stdio.h>

/**
 * main - prints the first 98 fibonacci
 *
 * Return: 0
 */

int main(void)
{

	unsigned long fib1 = 1, fib2 = 2, fib3, count = 2;

	printf("%ld, %ld, ",fib1, fib2);

	while (count < 98) {
		fib3 = fib1 + fib2;
		printf("%ld, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
		count++;
	}
	printf("\n");
	return 0;
}
