#include "main.h"

/**
 * _abs - main function
 *
 * @x: integer to make absolute
 * Return: absolute value of the integer
 *
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else
		return (x * -1);
}
