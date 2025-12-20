#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9.
 *
 * Description: Uses a loop and only two _putchar calls.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i); /* First use of _putchar */
	}
	_putchar('\n'); /* Second use of _putchar */
}
