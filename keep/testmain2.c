#include "main.h"
#include <stdio.h>
int main(void)
{
    int num1, num2;

    num1 = _printf("A %s sentence\n", "simple");
    num2 = printf("A %s sentence\n", "simple");
   _printf("Len:[%d]\n", num1);
    printf("Len1:[%d]\n\n", num2);
    
    num1 = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
    num2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
    _printf("Len:[%d]\n", num1);
    printf("Len1:[%d]\n\n", num2);

    num1 = _printf("A simple %v ntence\n");
    num2 = printf("A simple %v ntence\n");
    _printf("Len:[%d]\n", num1);
    printf("Len1:[%d]\n\n", num2);

    num1 = _printf("Percentage: %%\n");
    num2 = printf("Percentage: %%\n");
 _printf("Len:[%d]\n", num1);
    printf("Len1:[%d]\n\n", num2);

    return (num1);
}
