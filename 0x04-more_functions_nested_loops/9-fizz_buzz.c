#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * Return: Always 0 (succes)
 */
int main(void)
{
int c;
for (c = 0; c <= 100; c++)
{
if ((c % 3 == 0) && (c % 5 == 0))
{
printf("FizzBuzz");
}
else if (c % 3 == 0)
{
printf("Fizz");
}
else if (c % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", c);
}
if (c != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
