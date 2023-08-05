#include "main.h"

/**
 * _isalph - ches for alhabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything  else
 */
int _isalph(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
