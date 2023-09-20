#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *s = str;
	char *rot13_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_encoded = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		char *found_lower = strchr(rot13_lower, *s);
		char *found_upper = strchr(rot13_upper, *s);

		if (found_lower)
		{
			*s = rot13_encoded[found_lower - rot13_lower];
		}
		else if (found_upper)
		{
			*s = rot13_encoded[found_upper - rot13_upper];
		}

		s++;
	}

	return str;
}

