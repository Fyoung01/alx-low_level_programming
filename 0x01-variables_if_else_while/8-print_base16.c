#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all the numbers of base 16 in lower case
 * Return: 0
 */

int main(void)
{
int d;
char low;
for (low = '0'; d <= '9'; d++)
putchar(d);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
