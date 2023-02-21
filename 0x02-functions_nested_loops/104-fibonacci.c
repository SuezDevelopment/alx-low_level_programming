#include <stdio.h>

/**
 * main - prints the first 98 fibonacci
 *
 * Return: 0
 */

int main()
{
	int inc;
	unsigned long n1 = 1, n2 = 3, n3;

 	printf("%lu, %lu, ", n1, n2);

	for (inc = 3; inc <= 98; inc++) {
		n3 = n1 + n2;
		printf("%lu, ", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return 0;
}
