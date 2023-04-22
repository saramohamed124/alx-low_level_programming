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
int s;
for (s = '0'; s < '9'; s++)
{
putchar(s);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
