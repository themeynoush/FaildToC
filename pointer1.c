#include<stdio.h>

int main()
{
    int a = 33;
    int* ptr = NULL;
    //Our pointer is referring to the address of "a"
    ptr = &a;
    //%p , ptr returns the address of the memory 
    //%d , * ptr returns the value stored in that address
    printf("\na = %d , ptr = %p , ptr = %d \n", a, ptr, *ptr);
    //to change the value of a we can use pointers
    *ptr = 12;
    printf("a = %d\n", a);
    printf("a = %d\n", *ptr);
}