#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String length to find.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: String to check.
 * @x: Left index.
 * @y: Right index.
 *
 * Return: 1 if s is a palindrome, else 0.
 */
int check_palindrome(char *s, int x, int y)
{
	if (x >= y)
		return (1);
	if (s[x] != s[y])
		return (0);
	return (check_palindrome(s, x + 1, y - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: String to check.
 *
 * Return: 1 if s is a palindrome, else 0.
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}

