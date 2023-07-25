#include <unistd.h>
#include "main.h"
/**
 * _printint - A function that receives an integer and prints
 * it out, one character at a time. Both positive and negative
 * @num: Positive or negative integer
 * Return: count - returns the number of characters printed
 */

int _printint(int num)
{
	int count = 0, index = 0, i;
	char ch = '-', buff[20];

	if (!num)
	{
		write(1, &index, 1);
		return (1);
	}

	if (num < 0)
	{
		write(1, &ch, 1), num = -num;
		count++;
	}

	while (num)
	{
		buff[index] = (num % 10) + '0';
		num /= 10, index++;
	}

	for (i = index - 1; i >= 0; i--)
		write(1, &buff[i], 1), count++;

	return (count);
}
