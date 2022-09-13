#include "main.h"

/**
 * _islower - checks for lower case
 *
 *@c: character to compare
 *
 * Return: _islower(int c) returns 1 if c is lowercase, returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
