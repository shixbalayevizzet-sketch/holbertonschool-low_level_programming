#include <stdio.h>

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The integer to extract the digit from.
 * * Return: The value of the last digit (0-9).
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;

    // If the number is negative, the modulo result will be negative.
    // We convert it to positive to get the absolute value of the digit.
    if (last_digit < 0)
    {
        last_digit = -last_digit;
    }

    printf("%d", last_digit);
    return (last_digit);
}
