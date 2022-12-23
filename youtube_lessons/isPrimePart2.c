#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

static bool isPrime(int number)
{
    if (number <= 1)
    {
         return false;
    }
    
    for (int i = sqrt(number); i >1; i--)
    {
        if (number % i == 0)
        {
            return false;
        } 
    }
    return true;
}

int main()
{
    printf("Enter 2 integers!\n");
    long long int a , b;
    scanf("%lld%lld", &a , &b);  //it receives 2  numbers from the user

    for (int i = a; i <=b; i++)
    {
        if (isPrime(i) == true)
        {
            printf("%d , ", i);
        }   
    }
}