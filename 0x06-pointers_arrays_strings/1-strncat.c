#include "main.h"


/**
 * _strncat - Concatenates two strings
 *
 * @dest: string that is added to
 * @src: string to be appended
 * @n: the number of bytes from @src
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0; /* string length for src */
	int len2 = 0; /* string length for dest */
	int i;
	do {
		++len1;
	} while (src[len1] != '\0');

	do {
		++len2;
	} while (dest[len2] != '\0');

	for (i = 0; i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
