#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string being compared
 * @s2: string being compared to
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
        while (*s1 == *s2)
        {
                if (*s1 == '\0')
                {
                        return (0);
                }
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}
