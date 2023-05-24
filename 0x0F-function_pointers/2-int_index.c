#include "function_pointers.h"
/**
 * int_index - prints a name as is
 * @array: name of the person
 * @size: it is value
 * @cmp: it is value
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && size && cmp)
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
return (-1);
}
