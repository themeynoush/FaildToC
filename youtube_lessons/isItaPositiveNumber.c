#include <stdio.h>
#include <stdbool.h>

bool isPositive(int num)
{
    if (num > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    printf ("\t Please Enter a number: ");
    int userNum;
    if (isPositive(userNum))
    {
        printf("\t %d is a postivie number. \n", userNum);
    }
    else
    {
        printf("\t %d is a negative number! \n" , userNum);
    }
   
    scanf("%d ", &userNum);
}