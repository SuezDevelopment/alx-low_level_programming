#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: where to copy the string to
 * @n: the number of bytes
 * @src: the string to copy from
 *
 * Return: a pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1; /* string length for src */
	int len2; /* string length for dest */
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
