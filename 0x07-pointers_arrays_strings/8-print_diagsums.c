#include "main.h"
#include <stdio.h>
/**
 *print_diagsums -  fills memory with a constant byte
 * @a : it is value
 * @size : it is a value
 * Return: 0 always success
 */

void print_diagsums(int *a, int size)
{
int i, n, sun1 = 0, sun2 = 0;
for (i = 0; i <= (size * size); i = i + size - 1)
sun1 = sun1 + a[i];
for (n = size - 1; n <= (size * size) - size; n = n + size -1)
sun2 = sun2 + a[n];

printf("%d, %d\n", sun1, sun2);
}
