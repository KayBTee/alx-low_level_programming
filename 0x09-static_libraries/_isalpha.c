#include "main.h"
/**
 * _isalpha - displays 1 if the input is a letter and 0 if otherwise
 *
 * @c: The character is in ASCII code
 *
 * Return: 1 for letters and 0 otherwise
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}
