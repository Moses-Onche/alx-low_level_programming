#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int lgst;

	if (a > b && a > c)
	{
		lgst = a;
	} else if (b > a && b > c)
	{
		lgst = b;
	} else
	{
		lgst = c;
	}

	return (lgst);
}
