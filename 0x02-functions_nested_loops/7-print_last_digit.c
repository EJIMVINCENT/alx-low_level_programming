#include "main.h"

/**
 * print_last_digit - Entry point.
 * description: Prints the last digit of a number.
 *
 * @n: The number.
 * last_digit: stores the last digit
 *
 * Return: returns the value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar('0' + last_digit);

	return (last_digit);
}
