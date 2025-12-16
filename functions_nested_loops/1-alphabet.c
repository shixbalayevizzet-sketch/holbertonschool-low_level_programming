#include "main.h"

/**
 * print_alphabet - Kiçik hərflərlə əlifbanı çap edir
 *
 * Return: void
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
