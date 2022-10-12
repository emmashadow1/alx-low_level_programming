#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - looks for an integer.
 * @array: array of integer.
 * @size: total number of integer.
 * @cmp: pointer to the comparing value.
 *
 * Return: index of the first element.
 *-1 if no match is found or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
