#include "search_algos.h"

/**
 * linear_search: Uses the Linear Search algorithm to
 * find a given value in an array of integers
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int a = 0;

	if (array == NULL)
		return (-1);

	while(a < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (i);
		a++;
	}
	return (-1);
}
