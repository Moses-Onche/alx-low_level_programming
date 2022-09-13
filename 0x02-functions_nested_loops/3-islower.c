#include "main.h"

/**
 * _islower(int c) - checks for lower case
 *
 *
 * Return: _islower(int c) returns 1 if c is lowercase, returns 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
