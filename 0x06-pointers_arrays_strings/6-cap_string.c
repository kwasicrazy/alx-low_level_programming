#include "main.h"

int is_sep(char ch);

/**
 * cap_string - Capitalizes all words of a string.
 * @str: String to be processed.
 * Description: Separators of words use: space, tabulation, new line
 * ,;.!?"(){}
 *
 * Return: The processed string.
 */
char *cap_string(char *str)
{
	int x;

	x = 0;
	if (str[x] >= 'a' && str[x] <= 'z')
		str[x] -= 32;
	for (x = 1; str[x] != '\0'; ++x)
	{
		if (is_sep(str[x - 1]))
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] -= 32;
	}
	if (str[x - 1] >= 'a' && str[x - 1] <= 'z')
		str[x - 1] -= 32;
	return (str);
}

/**
 * is_sep - Checks for a separator character.
 * @ch: Character to be processed.
 *
 * Return: 1 if separator, else 0.
 */
int is_sep(char ch)
{
	char sep[] = " \n\t.,;!?\"()[]";
	int x;

	for (x = 0; sep[x] != '\0'; x++)
	{
		if (sep[x] == ch)
			return (1);
	}
	return (0);
}

