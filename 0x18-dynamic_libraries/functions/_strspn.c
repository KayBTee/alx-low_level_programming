#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: a pointer
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int bytes = 0;
        int ind;

        while (*s)
        {
                for (ind = 0; accept[ind]; ind++)
                {
                        if (*s == accept[ind])
                        {
                                bytes++;
                                break;
                        }
                        else if (accept[ind + 1] == '\0')
                                return (bytes);
                }
                s++;
        }
        return (bytes);
}

