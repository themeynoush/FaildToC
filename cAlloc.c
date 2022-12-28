//contiguous allocation in C programming
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    //ptr = (int*)calloc(5*sizeof(int));
    ptr = (int*)calloc(5, sizeof(int));
    //As you can see the difference in context is * and , in the sizing section
    //However, the real difference is that calloc initializes each block with a default value ‘0’.
    printf("%d\n", *(ptr+0));
    //dynamically deallocate the memory
    free(ptr);
}