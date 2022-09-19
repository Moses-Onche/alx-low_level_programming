#include "main.h"

/**
 * print_rev - print string from pointer in reverse
 *
 * @s: pointer char
 * Return: always 0
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
