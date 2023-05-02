#include "main.h"
/**
 * swap_int - takes a pointer to an int as parameter
 * @a : it is integer which its address and value will be printed
 * @b : it is integer which its address and value will be printed
 *  Return : 0 always success
 */
void swap_int(int *a, int *b)
{
int y = *a;
*a = *b;
*b = y;
}
