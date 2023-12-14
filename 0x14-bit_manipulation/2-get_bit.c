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
if (index > sizeof(n) * 8)
return (-1);

return (n >> index & 1);
}

