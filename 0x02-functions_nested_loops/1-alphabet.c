#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet();
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
printf("%c",i);

putchar('\n');
