#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute function param.
 * @array: the array of element
 * @size: size of the passed array to function
 * @action: function pointer.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
