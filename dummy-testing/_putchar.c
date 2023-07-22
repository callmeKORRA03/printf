#include <unistd.h>

/**
 * nputchar -Prints a character and returns an integer (1) per call
 * @c: Character to be printed
 * Return: (1) Always
 */

int _putchar(char c)
{
	int count = 0;

	write(1, &c, 1);
	count++;

	return (count);
}
