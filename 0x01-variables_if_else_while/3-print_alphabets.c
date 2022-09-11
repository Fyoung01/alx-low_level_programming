#include <stdio.h>
/**
 * main - program that prints the alphabet in lower case, and then in uppercase, followed by a new line
 * you can only use putchar three times in your code
 * Return: (0)
 */
int main(void)
{
	int lw = 'a';
	int up = 'A';
	while (lw <= 'z')
	{
		putchar(lw);
		lw += 1;
	}
	while (up <= 'Z')
	{
		up += 1;
	}
	putchar('\n');
	return (0);
}
