#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string, where the concatenation is stored.
 * @src: Source string to be concatenated.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0'; /* Null-terminate the resulting string */
	return (dest);
}

