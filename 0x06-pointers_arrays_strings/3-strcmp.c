#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: difference in string length
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0')
			return (s1[x] - s2[x]);
		x++;
	}

	return (s1[x] - s2[x]);
}
