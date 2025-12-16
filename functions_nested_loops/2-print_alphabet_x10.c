#include "main.h"

/**
 * print_alphabet_x10 - Əlifbanı 10 dəfə çap edir
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
