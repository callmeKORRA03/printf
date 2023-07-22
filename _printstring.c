#include <unistd.h>
#include "testing/main.h"

/**
 * _putstring - A function used to return a string
 * @str: used to return any string passed to it
 * Return: Return number of characters sucessfully printed
 */

int _putstring(char *str)
{
        int i = 0;

        while (*str)
        {
                write(1, str, 1);
                str++;
                i++;
        }
        return (i);
}
