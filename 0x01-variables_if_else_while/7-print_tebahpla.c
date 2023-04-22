#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *putchar() is a function
 * Return: Always 0 (Success)
*/
int main(void)
{
int alphapet = 122;
while (alphapet >= 97 )
{
putchar(alphapet);
alphapet--;
}
putchar('\n');
return (0);
}
