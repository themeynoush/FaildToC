//We are continuing with sizeof to get the size of a variable

#include<stdio.h>

int main()
{
    printf("\n%d" , __SIZEOF_INT__);
    printf("\n%d", __SIZEOF_LONG__);
    printf("\n%d", __SIZEOF_FLOAT__);
    printf("\n%d", __SIZEOF_DOUBLE__);
    printf("\n%d", sizeof(char)); //we can also use this way to get the size of a varialbe

    unsigned long int d = -30234; // to define an unsigned variable we use unsigned
    printf("\n d = %ld", d);
}