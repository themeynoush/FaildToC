//Write a program that asks the user to enter two numbers
// and swaps them using swap function and pointers

#include<stdio.h>
int a, b;

int swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main()
{
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    printf("\na = %d , b = %d\n", a , b);
    
    swap(&a, &b);
    printf("\na = %d , b = %d\n", a , b);
    return 0;
}