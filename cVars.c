//Variables in C
#include <stdio.h>
#include<stdbool.h> // For using Boolian values

int main()
{
    //Integers in C:

    int a; // The value of a is a regular integer
    a = 12;
    printf("\n a = %d", a); //To print the value of a decimal number we use %d

    long int b; // The value of b is a long integer
    b = 234543934;
    printf("\n b = %ld", b); // To print the value of a long decimal we use %ld

    long long int c; // The value of c is a very long inetger
    c= 923344934593528756;
    printf("\n c = %lld", c); //To print the value of a long long decimal we use %lld

    //Another way to print them all in one line would be:
    printf("\n a = %d , \t b = %ld , \t c = %lld" , a ,b, c); // \n goes to the next line and \t make a tab space
    
    
    //Floating numbers in C:
    float x; //The value of x is a regular floating number
    x = 3.954;

    double y; //The value of y is a long floating number
    y = 0.32848236;

    printf("\n x = %f , \t y = %lf" , x , y); //%f and %lf print float and double varialbes, repectively

    //Overflow is when you choose a very large value for your variable
    //Underflow is when you choose an extremly small number for your varialbe

    //Constants in C:
    const double PI = 3.1415; //if we use 'const' we are defining a constant. We can't define another variable called PI
    printf("\n PI = %.2lf" , PI); // %.2lf prints up to 2 flaoting digit number of PI

    //Characters in C: 
    char n='A'; // The value of 'name' is a character
    //notice we can see the ASCII vlaue by doing a mouse over action
    printf("\n n = %c", n); //%c prints a charachter

    printf("\n ASCII of n is = %d" , n);
    
    //Boolian values
    bool Correct = true; // keep in mind we cannot print boolian values
    bool Wrong = false;

    //Now we want to get input from the user
    printf("\n\n\n Enter your number please:"); 
    int num; // The type of varialbe that we want to get from users
    scanf("%d" , &num); //go to where num is defined in the memory
    printf("\n Your number is = %d \n" , num);

}   