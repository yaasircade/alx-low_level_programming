#include <stdio.h>

/**
 * main - print letters of the alphabet
 *
 * Description: print letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
 for (letter = 'z'; letter >= 'a'; letter--)
   putchar(letter);
putchar('\n');
return (0);
}
