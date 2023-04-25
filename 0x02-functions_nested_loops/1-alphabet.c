#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
void print_alphabet(void)
{
char i;
for (char i = 'a'; i <= 'z'; i++)
{
printf("%c", i);
}
}
