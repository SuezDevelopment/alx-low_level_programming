#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */


int _atoi(char *s)
{
	int x, y, n, len, z, digit;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	z = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && z == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			n = n * 10 + digit;
			z = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			z = 0;
		}
		x++;
	}

	if (z == 0)
		return (0);

	return (n);
}
