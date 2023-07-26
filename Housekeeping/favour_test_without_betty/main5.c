#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        unsigned int unsigned_value = 12345;
        unsigned int unsigned_value1 = 14785239;
        unsigned int unsigned_value0 = 0;
        unsigned int octal_value = 123;
        unsigned int octal_value0 = 0;
        unsigned int hex_lower_value = 300;
        unsigned int hex_lower_value0 = 0;
        unsigned int hex_upper_value = 300;
        unsigned int hex_upper_value0 = 0;

        /*printf("u: %u\n", unsigned_value);
        _printf("my function u: %u\n", unsigned_value);
        printf("u: %u\n", unsigned_value1);
        _printf("my function u: %u\n", unsigned_value1);
        printf("u: %u\n", unsigned_value0);
        _printf("my function u: %u\n", unsigned_value0); */
        printf("o: %o\n", octal_value);
        _printf("my function o: %o\n", octal_value);
        printf("o: %o\n", octal_value0);
        _printf("my function o: %o\n", octal_value0);
        printf("x: %x\n", hex_lower_value);
        _printf("my function x: %x\n", hex_lower_value);
        printf("x: %x\n", hex_lower_value0);
        _printf("my function x: %x\n", hex_lower_value0);
        printf("X: %X\n", hex_upper_value);
        _printf("my function X: %X\n", hex_upper_value);
        printf("X: %X\n", hex_upper_value0);
        _printf("my function X: %X\n", hex_upper_value0);
        return (0);
}
