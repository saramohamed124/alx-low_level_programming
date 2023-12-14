#include "main.h"

/**
 * get_bit - gets the bot at the index
 * @n: the value
 * @index: the value
 *
 * Return: the bit state or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 0 || index > sizeof(n))
return (n >> index & 1);

return (0);
}

