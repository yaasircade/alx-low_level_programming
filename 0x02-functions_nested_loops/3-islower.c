#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to be checked
 *
 * Description: prints all lowercase letters
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
