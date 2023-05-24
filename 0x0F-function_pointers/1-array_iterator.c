#include "function_pointers.h"
/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size: it is value
 * @action: it is value
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end = array + size - 1;
if (array && size && action)
	while (array <= end)
		action(*array++);
}
