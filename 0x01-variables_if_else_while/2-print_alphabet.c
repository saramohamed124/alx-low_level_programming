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
char alphapet;
for (alphapet = 'a';alphapet <= 'z';alphapet++)
putchar(alphapet);

putchar('\n');
return (0);
}
