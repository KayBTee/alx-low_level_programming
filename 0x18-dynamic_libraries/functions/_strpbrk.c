#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the tring to be searched
 * @accept: bytes to be searched for
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
        int ind;

        while (*s)
        {
                for (ind = 0; accept[ind]; ind++)
                {
                        if (*s == accept[ind])
                                return (s);
                }
                s++;
        }
        return ('\0');
}

