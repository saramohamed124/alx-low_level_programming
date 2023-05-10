#include "main.h"
/**
 *is_prime_number - prints a string, followed by a new line
 *@n : it is a value
 *@i : it is a value
 *Return: 0 always Success
*/

int check_prime(int n, int i);
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
/**
 *check_prime - prints a string, followed by a new line
 *@n : it is a value
 *@i : it is a value
 *Return: 0 always Success
*/
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (check_prime(n, i + 1));
}
