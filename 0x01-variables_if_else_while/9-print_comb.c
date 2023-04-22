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
for (s = 48; s <= 57; s++)
{
putchar(s);
if (s == 57)
{
 continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
