#include "main.h"

/**
 * _strncat - Concatenate two strings by a specified number of bytes.
 * @dest: Destination string, where the concatenation is stored.
 * @src: Source string to be concatenated.
 * @n: Number of bytes to concatenate from the source.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;

	y = 0;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0'; /* Null-terminate the resulting string */
	return (dest);
}

