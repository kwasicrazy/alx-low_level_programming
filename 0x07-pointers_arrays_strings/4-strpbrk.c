#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in the string s
 *            of any of the bytes in the string accept.
 * @s: String to search.
 * @accept: Bytes to match.
 *
 * Return: A pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}

	return (NULL);
}

