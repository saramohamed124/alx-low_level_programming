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
char s;
char u;
for (s = 'a'; s <= 'z'; s++)
putchar(s);

for (u = 'A'; u <= 'Z'; u++)
putchar(u);

putchar('\n');
return (0);
}
