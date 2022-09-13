#include "main.h"

/**
 * main - Entry point
 *
 * Return: always zero
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
