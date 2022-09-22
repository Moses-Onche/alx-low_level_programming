#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 *
 * @a: array to reverse
 * @n: size of array
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = t;
	}
}
