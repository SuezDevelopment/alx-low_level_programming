#include "main.h"


/**
 * _strcat - Concatenates two strings
 *
 * @dest: the string @src is added to
 * @src: the string to be appended
 *
 * Return: pointer to the resulting string @dest
 */



char *_strcat(char *dest, char *src)
{
	int len1; /* string length for src */
	int len2; /* string length for dest */
	int x;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (x = 0; x <= len1; x++)
	{
		dest[len2] = src[x];
		len2++;
	}
	return (dest);
}
