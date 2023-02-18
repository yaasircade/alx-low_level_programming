#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char letter;
 for (num = 0; num < 10; num++)
   putchar((num % 10) + '0');
 for (letter = 'a'; letter <= 'f'; leter++)
   putchar(letter);
putchar('\n');
return (0));
}
