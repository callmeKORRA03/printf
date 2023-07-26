#include <stdio.h>
#include "main.h"
int main()
{
    int num1, num2;

    num1 = _printf("My function Hex (lowercase): %x\n", 255);
    num2 = printf("Hex (lowercase): %x\n", 255);
    printf("Len:[%d]\n", num1);
    printf("Len1:[%d]\n\n", num2);

    num1 = _printf("My fucntion Hex (uppercase): %X\n", 255);
    num2 = printf("Hex (uppercase): %X\n", 255);
    printf("Len:[%d]\n", num1);
    printf("Len1:[%d]\n\n", num2);

    num1 = _printf("my Function Octal: %o\n", 123);
    num2 = printf("Octal: %o\n", 123);
    printf("Len:[%d]\n", num1);
    printf("Len1:[%d]\n\n", num2);

    return 0;
}

