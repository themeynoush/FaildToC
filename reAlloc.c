//reallocation of memory in C programming
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    
    ptr = (int*)calloc(5, sizeof(int));
    
    *(ptr+1) = 3;
    
    printf("%d\n", *(ptr+1));

    //reallocating memory format:
    //ptr = realloc(ptr , x);
    ptr = realloc(ptr, 10*sizeof(int));

    //dynamically deallocate the memory
    free(ptr);
}
