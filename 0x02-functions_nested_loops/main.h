#include <unistd.h>

/**
 * _putchar - writes char c to std output
 *
 * Return: on success, returns 1
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
