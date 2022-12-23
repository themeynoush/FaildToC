//Write a program that swaps the value of two integers

#include <stdio.h>

int main() 
{
    int a = 10;
    int b = 25;
    int c;

    printf("\n old a= %d", a);
    printf("\n old b = %d", b);

    c = b;
    b = a;
    a = c;

    printf("\n new a = %d", a);
    printf("\n new b = %d", b);
}




