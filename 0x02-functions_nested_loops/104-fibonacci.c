#include <stdio.h>

/**
 * main - prints the first 98 fibonacci
 *
 * Return: 0
 */

int main()
{
	int inc;
	unsigned long fib[98];
	fib[0] = 1;
	fib[1] = 2;

	for (inc = 2; inc < 98; inc++) {
        	fib[inc] = fib[inc-1] + fib[inc-2];
    	}

	for (inc = 0; inc < 98; inc++) {
		printf("%lu ",fib[inc]);
	}

	printf("\n");
	return 0;
}
