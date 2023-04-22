#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *while and if are functions
 * Return: Always 0 (Success)
*/
int main (void)
{
char o = 'a';
while (o <= 'z'){
if (o == 'e'|| o == 'q')
{
o++;
continue;
}
putchar(o);
o++;
}
putchar('\n');
return (0);
}
