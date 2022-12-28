//Write a program using calloc/malloc that defines an array
//and finds the biggest value

#include<stdio.h>
#include<stdlib.h>

 int main()
 {
    int* ptr = NULL;
    int n;
    printf("Enter the number of values:\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number:");
         scanf("%d", (ptr+i));
    }

    int max = *(ptr+0);
    for (int i = 0; i < n; i++)
    {
        if (max < *(ptr+i))
        {
            max = *(ptr+i);
        }
    }
    printf("Maximum is: %d\n" , max);
    
    free(ptr);
 }


