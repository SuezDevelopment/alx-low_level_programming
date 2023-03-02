#include "main.h"

/**
 * leet - replaces a bunch of numbers with letters
 *
 * @z: the string to look at
 *
 * Return: the new string
 */

char *leet(char *z)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int x, y;

	for (x = 0; z[x] != '\0'; x++)
	{
		for (y = 0; arr[y] != '\0'; y++)
		{
			if (z[x] == arr[y])
				z[x] = replace[y / 2];
		}
	}
	return (z);
}
