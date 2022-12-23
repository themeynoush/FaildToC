// write a program that takes two decimal numbers and swaps them
#include<stdio.h>

int main()
{
    printf("\n Please enter two numbers");3 4

    int a, b, temp;
    scanf("%d %d", &a , &b);
    printf("\n a = %d , b = %d", a , b);
    temp = a;
    a = b;
    b = temp;
    printf("\n a = %d , b = %d", a , b);
}