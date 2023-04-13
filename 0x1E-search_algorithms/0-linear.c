#include "search_algos.h"

/**
 * linear_search - Uses the Linear Search algorithm to
 * find a given value in an array of integers
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;
	a = 0;

	// Handle empty array
	if (array == NULL)
		return (-1);

	while (a < size)
	{
		printf("Value checked array[%u] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}