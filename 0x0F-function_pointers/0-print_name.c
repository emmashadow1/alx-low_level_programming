#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: pointer to name.
 * @f: A pointer function.
 * Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
