#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value it points to to 98
 * @n : it is integer which its address and value will be printed
 * Return : 0 always success
 */
void reset_to_98(int *n)
{
int s = 98;
int *n = &s;
_putchar(*n + 48);
_putchar('\n');
_putchar(s + 48);
return (0);
}
