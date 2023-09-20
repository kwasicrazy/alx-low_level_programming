#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: 0 if strings are equal, else the difference between strings.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	if (*s1 != '\0')
		return (*s1);
	else if (*s2 != '\0')
		return (*s2);

	return (0);
}

