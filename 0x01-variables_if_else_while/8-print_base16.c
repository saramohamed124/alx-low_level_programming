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
char u;
for (s = '0'; s <= '9'; s++)
putchar(s);

for (u = 'a'; u <= 'f'; u++)
putchar(u);

putchar('\n');
return (0);
}
