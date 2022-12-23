// Write a program for adding, subtracting, etc

#include<stdio.h> //If you forget to add this line, you'll get a Link Error

int main()
{
    int a = 10;
    int b = 25;
    int sum = a + b;
    int sub = a - b;
    int multiply = a * b;
    int divide = b / a; //If you divide a number by 0, you'll get a Runtime Error
    //In general, Runtime Errors happen when you make a mistake in your codes

    int remainder = b % a; //Remainder cannot be defined four float and double values

    printf("\n a = %d, b = %d, sum = %d, sub = %d, multiply = %d, divide = %d, remainder = %d \n" , a , b , sum, sub, multiply, divide, remainder);
    //If your program can be run, but doesn't show the expected result, it means you got a Logical Error
    //The result of division is 2 and not 2.5. It's because we defined and be as inetgers
}