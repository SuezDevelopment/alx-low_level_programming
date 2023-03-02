#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @z: the string to look at
 *
 * Return: the capitalized string
 */

char *cap_string(char *z)
{
	int x = 0;
	int y;
	char badchars[] = " \n\t,;.!?\"(){}";


	if (z[0] >= 'a' && z[0] <= 'z')
		z[0] -= 32;

	for (; z[x] != '\0'; x++)
	{
		for (y = 0; y < 14; y++)
		{
			if (z[x] == badchars[y])
			{
				if (z[x + 1] >= 'a' && z[x + 1] <= 'z')
					z[x + 1] -= 32;
			}
		}
	}

	return (z);
}
