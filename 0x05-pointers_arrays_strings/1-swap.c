#include "main.h"

/**
 * swap_int - swap the value of two variables
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
