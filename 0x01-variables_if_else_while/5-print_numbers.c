#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * all your code must be in the main function
 * Return: 0
 */

int main(void)
{
	int n;
	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	printf("\n");
	return (0);
}
