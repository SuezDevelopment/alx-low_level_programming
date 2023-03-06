#include "main.h"


/**
 * _strspn - function that gets the length of a prefix substring
 *
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */


unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y = 0;
	unsigned int t = 0;

	while (s[x] != ' ' && s[x] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
				t++;
			y++;
		}
		x++;
		y = 0;
	}
	return (t);
}
