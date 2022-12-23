//Using loops in C
//print a * for 100 times
#include <stdio.h>

void main()
{
    int i;
    int count;
    count = 100;

    for (i = 1; i <= count; i++) // if you want to keep the loop going for ever, in the second statement you can put any values other than 0
    //Because 0 means false any other values other than 0 means true
    {
        printf("*");
        printf("%d \n" , i);
        
    }
    
}