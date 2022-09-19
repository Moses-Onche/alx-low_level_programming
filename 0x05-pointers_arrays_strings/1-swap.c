#include "main.h"

/**
 * swap_int - swap the value of two variables
 * 
 * @a: pointer integer
 * @b: pointer integer
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
