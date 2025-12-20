#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The integer to extract the digit from.
 *
 * Return: The value of the last digit (0-9).
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	/* Convert negative remainder to positive */
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
