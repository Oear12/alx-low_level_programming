#include "main.h"

/**
 * _isalpha - ches for alhabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for any else
 */

int _isalph(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
