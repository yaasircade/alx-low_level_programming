#include "main.h"

/**
 * print_alphabet - prints alphabet of letters in lowercase
 *
 * Description: prints the alphabet in lowercase follwed by a new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
