#include "main.h"
#include <string.h>
/**
 * main - Aprogram that prints _putchar
 * followed by a new line
 * the program should return to 0
 *
 * Return: 0,success
 */

int main(void)

char str[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ++ch)
_putchar(str[ch]);
_putchar('\n');

return (0);
}
