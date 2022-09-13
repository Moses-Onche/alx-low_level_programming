#include "main.h"

/**
 * print_last_digit - main function
 *
 * @l: input to check last digit
 * Return: returns the last digit of l
 *
 */
int print_last_digit(int l)
{
	_putchar('0' + (l % 10));
	return (l % 10);
}
