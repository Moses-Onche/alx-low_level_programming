#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of a string
 *
 * @str: pointer char
 * Return: always 0
 */
void puts_half(char *str)
{
	int i;
	int oT = 0;

	if (_strlen(str) % 2 != 0)
	{
		oT += 1;
	}
	for (i = (_strlen(str) + oT) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
