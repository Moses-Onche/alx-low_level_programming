#include "main.h"

/**
 * print_to_98 - main function
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	int a;
	int b = 0;

	for (a = 0; a <= 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}

	}
	_putchar('0' +  b);
}
