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
int digit1 = 0, digit2, digit3;
while (digit1 <= 9)
{
digit2 = 0;
while (digit2 <= 9)
{
digit3 = 0;
while (digit3 <= 9)
{
if (digit1 != digit2 && digit1 < digit2)
{
if (digit2 != digit3 && digit2 < digit3)
{
putchar(48 + digit1);
putchar(48 + digit2);
putchar(48 + digit3);
if (digit1 + digit2 != 15)
{
putchar(',');
putchar(' ');
}
}
}
digit3++;
}
digit2++;
}
digit1++;
}
putchar('\n');
return (0);
}
