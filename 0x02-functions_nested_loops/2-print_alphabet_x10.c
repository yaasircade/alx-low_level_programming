#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets
 *
 * Description: prints the alphabets 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int alph_count = 0;
while (alph_count < 10)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
alph_count++;
_putchar('\n');
}
