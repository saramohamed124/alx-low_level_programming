#include "main.h"
/**
 * reverse_array -  concatenates two strings
 * @n : it is value
 * @a : it is value
 * Return: dest
 */
void reverse_array(int *a, int n)
{
int w, integer;
for (integer = n - 1; integer >= n / 2; integer--)
{
w = a[n - 1 - integer];
a[n - 1- integer] = a[integer];
a[integer] = w;
}
}
