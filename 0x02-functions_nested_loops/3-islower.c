#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lowercase
 * other wise always 0
 */

int_islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
