#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array of integers to be reversed.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
}

