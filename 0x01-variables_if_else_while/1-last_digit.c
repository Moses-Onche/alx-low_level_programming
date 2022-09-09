#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0))
	n = rand() - RAND_MAX / 2;
	
	p = n % 10;
	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	} else if (p = 0)
	{
		print("Last digit of %d is %d and is 0\n", n, p);
	} else
	{
		printf("Last digit of %d is %d and is less 6 and is not 0\n", n, p);
	}
	return (0);
}
