#include <unistd.h>

/**
 * _putchar function
 *
 * Return: always 1, -1 is returned when an error occurs
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
