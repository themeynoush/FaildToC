#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

static bool isPrime(int number)
{
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
    if (isPrime(47))
    {
        printf("This is prime number. \n");
    }
    else
    {
        printf("This is not a prime number. \n");
    }
    
}

// hala mikhaym do ta adadao az user begire badesh adadaye avale beynesho
//print begire
/*
int main()
{
    int userNum;
    printf("Enter a number: \n");
    scanf("%d \n", &userNum);

    if (isPrime(userNum))
    {
        printf("%d is a Prime number" , userNum);
    }
    
    else;
    {
        printf("%d is NOT a Prime number" , userNum);
    }
}
*/


    