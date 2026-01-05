#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: the dimensions of the matrix (size x size)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Main diagonal: a[0][0], a[1][1], a[2][2]... */
		sum1 += a[i * (size + 1)];

		/* Anti-diagonal: a[0][size-1], a[1][size-2], a[2][size-3]... */
		sum2 += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
