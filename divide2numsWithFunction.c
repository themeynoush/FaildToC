#include<stdio.h>

int divideNums(int num1, int num2);
int num1, num2;

int main()
{
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &num1, &num2);
    printf("\nThe result of division is = %d \n", divideNums(num1, num2));
    return 0;
}

int divideNums(int num1, int num2)
{
    int divide;
    divide = num1 / num2;
    return divide;
}