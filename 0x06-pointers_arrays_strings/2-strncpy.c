#include "main.h"

/**
 * _strncpy - Copies a string up to a specified number of bytes.
 * @dest: Destination string where the copy is stored.
 * @src: Source string to be copied.
 * @n: Number of bytes to copy from the source.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

