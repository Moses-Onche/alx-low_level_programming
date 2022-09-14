#include "main.h"

/**
 * print_to_98 - main function
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	int b = 0;

	for (; n <= 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			b += n;
		}

	}
	_putchar(b);
}
