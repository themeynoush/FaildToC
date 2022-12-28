#include<stdio.h>
#include<stdlib.h>

int add(int num1, int num2);
int num1, num2, sum;
int main()
{

    printf("Please enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    printf("The sum of your numbers are: %d\n", add(num1, num2));
}

int add(int num1, int num2)
{
    sum = num1+ num2;
    return sum;
}