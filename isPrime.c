//This function receives a number and checkes to see whether it's a prime number or not.
#include <stdio.h>
#include <stdbool.h> 
#include <stdlib.h> 
#include <math.h>

static bool isPrime(int number) //create a static boolian function, which their input is an integer number
{
    for (int i = sqrt (number); i > 1; i--)
    {
        if ( number % i == 0)
        {
            return false;
        }  
    } 
    return true;   
}

int main()
{
    if (isPrime(170)) //calling the function
    {
        printf("\tThis is a prime number.\n");
    }
    else
    {
        printf("\tThis is not a prime number.\n");
    }
}