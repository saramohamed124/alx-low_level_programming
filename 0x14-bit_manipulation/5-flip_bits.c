#include "main.h"

/**
 * flip_bits - return number of bits
 * transform one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bit to flip to convert
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int s = n ^ m;
unsigned int count = 0;

while (s)
{
if (s & 1ul)
count++;
s = s >> 1;
}
return (count);
}
