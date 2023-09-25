#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: String to search.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0' && s[x] != c)
	{
		x++;
	}
	if (s[x] == c)
	{
		return (&s[x]);
	}
	else
	{
		return (NULL);
	}
}

