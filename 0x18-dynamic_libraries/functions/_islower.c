#include "main.h"
/**
 * _islower - shows 1 if the input is a lowercase and returns 0 in other cases
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for lowercase and 0 for other cases
 */
int _islower(int c)
{
        if (c >= 97 && c <= 122)
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}
