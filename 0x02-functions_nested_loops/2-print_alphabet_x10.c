#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int count = 1;
	int start;

	while (count <= 10)
	{
		for (start = 97; start <= 122; start++)
		{
			_putchar(start);
		}
		_putchar(10);
		count++;
	}
}
