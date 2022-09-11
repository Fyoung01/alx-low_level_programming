#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
int d;
for (d = '1'; d <= '99'; d++)
{
putchar(d);
if (d != '99')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
