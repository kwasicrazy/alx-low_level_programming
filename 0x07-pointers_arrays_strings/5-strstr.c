#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in the haystack.
 * @haystack: String to search.
 * @needle: Substring to find.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if substring not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	x = y = 0;
	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
				break;
			++y;
		}
		if (needle[y] == '\0')
			return (haystack + x);
		y = 0;
		++x;
	}
	return (NULL);
}

