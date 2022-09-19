#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - print the first character of a string and every other one
 *
 * @str: pointer char
 * Return: always 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
