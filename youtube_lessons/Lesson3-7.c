//Write a program using mulitple loops to print a triangle

#include<stdio.h>

int main()
{
    int i, j;
    for (i = 0; i <= 5 ; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }   
}