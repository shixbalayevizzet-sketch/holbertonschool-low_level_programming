#include "main.h"

/**
 * actual_sqrt - helper function to find the natural square root
 * @n: the number to calculate the square root of
 * @i: the iterator/guess to check
 *
 * Return: the resulting square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}
