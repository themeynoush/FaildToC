//Working with breaks in C
#include<stdio.h>

void main(void)
{
    int i;
    for (i = 0; i < 20; i++)
    {
        if (i == 10)
        {
            printf("Exit!\n");
            //break; //It breaks the current loop
            continue; //It's the opposite of Break
            //It says keep doing what where you doing (Not very practical in real world)
            //Also keep in mind when we use Continue it doesn't follow the next order  
        }
        printf("%d \n" , i);
    }
}