#include "main.h"

/**
 * A program that prints the sum of all the multiples of 3 and 5 below 1024 (excluded)
 * using standard library
 * followed by a new line
 * Return: 0 successful
 */

int main(void)
{
int sum, num;
for (num = 0; num < 1024; ++num)
{
if ((num % 3 == 0)|| (num % 5 == 0))
sum += num;
}
printf("%d\n", sum);
return (0);
}
