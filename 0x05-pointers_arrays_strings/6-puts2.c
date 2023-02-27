#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string followed by a new line
 *
 * @str: string to print the chars from
 */


void puts2(char *str)
{
	int len, x;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
