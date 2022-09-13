#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets 10 times
 *
 * Return: always 0
 *
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
