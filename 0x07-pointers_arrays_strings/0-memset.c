#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 *           area pointed to by s with the constant byte b.
 * @s: Pointer to the memory area.
 * @b: Constant byte.
 * @n: Number of bytes.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; ++x)
		*(s + x) = b;
	return (s);
}

