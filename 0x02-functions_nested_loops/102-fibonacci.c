#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0
 */


int main(void)
{
	int increment;
	unsigned long n1 = 0, n2 = 1, n3;

	for (increment = 0; increment < 50; increment++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;

		if (increment == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
