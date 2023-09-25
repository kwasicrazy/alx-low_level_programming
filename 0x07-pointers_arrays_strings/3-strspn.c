#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to search.
 * @accept: Bytes to match.
 *
 * Return: Number of bytes in the initial segment of s
 *         which consists only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	int m;

	for (x = 0; s[x] != '\0'; x++)
	{
		m = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				m = 1;
				break;
			}
		}
		if (!m)
		{
			return (x);
		}
	}
	return (0);
}

