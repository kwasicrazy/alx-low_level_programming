#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: String to be processed.
 *
 * Return: The processed string.
 */
char *leet(char *str)
{
	char ch[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; ch[y] != '\0'; y++)
		{
			if (str[x] == ch[y])
			{
				str[x] = leet[y];
				break;
			}
		}
	}
	return (str);
}

