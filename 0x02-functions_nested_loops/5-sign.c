#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number of which the sign will be printed
 *
 * Description: prints the sign of a number based on input
 *
 * Return: 1 if the number is greater than 0,
 * 0 if the number is zero,
 * -1 if the number is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
