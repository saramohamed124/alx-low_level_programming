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
int numbers;
for (numbers = 0 ; numbers <= 9 ;  numbers++)
printf("%i",numbers);

putchar('\n');
return (0);
}
