#include<stdio.h>
#include<stdlib.h>

int main()
{
    //We have apointer that referes to nowhere
    int* ptr= NULL;
    //Therefore, it return nothing
    printf("%p\n", ptr);
    //In order to find a home for our pointer we have to use the following format
    //ptr = (castType*) malloc(size)
    //in the size section if I just put a number like 20 that would cause a problem
    //because it may be different from one computer to another 
    //so we say five times int size, for example. Which is 20 bytes of memory
    ptr = (int*) malloc(5*sizeof(int));
    //now we can see where the pointer referes to
    printf("%p\n", ptr);
    //now we allocat values to index 0 to 2 and print them
    *(ptr+0)= 10;
    *(ptr+1)= 11;
    *(ptr+2)= 12;

    printf("%d\t %d\t %d\n", *(ptr+0), *(ptr+1),*(ptr+2));

    //Now we want the user to enter those values 
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &*(ptr+i));
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n\n%d\t", *(ptr+i));
    }
}