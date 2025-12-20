#include "main.h"

/**
 * print_square - Prints a square of a given size.
 * @size: The width and height of the square.
 *
 * Return: void.
 */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
