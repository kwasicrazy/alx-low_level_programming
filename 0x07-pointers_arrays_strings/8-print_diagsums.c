#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square
 *                 matrix of integers.
 * @a: Pointer to the matrix of integers.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, x, y, z;

	y = 0;
	z = size - 1;
	sum1 = sum2 = 0;

	for (x = 0; x < size; x++, y += size + 1, z += size - 1)
	{
		sum1 += *(a + y);
		sum2 += *(a + z);
	}

	printf("%d, %d\n", sum1, sum2);
}

