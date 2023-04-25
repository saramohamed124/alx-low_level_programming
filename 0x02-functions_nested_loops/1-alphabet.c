#include "main.h"
#include <stdio.h>
void print_alphabet(void);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
void print_alphabet(void)
for (char i = 'a'; i <= 'z'; i++)
{
printf("%c", i);
}
}
