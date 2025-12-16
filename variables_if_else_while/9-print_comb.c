#include <stdio.h>

/**
 * main - Prints all single digit numbers followed by a comma and space
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
        {
		putchar(n + 48);

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
