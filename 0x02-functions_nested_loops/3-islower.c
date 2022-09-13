#include "main.h"

/**
 * int _islower(int c) - checks for lower case
 *
 * Return: 1 if character is lowercase, 0 otherwise
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
