//Writing a program using functions to calculate factorial value
#include<stdio.h>

long long int factorial(int x)
{
    return ((x-1)*x);
}

int main()
{
    printf ("%lld \n", factorial(533768));
}