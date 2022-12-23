//Working with functions with C
//Function definition
//Return statement

#include <stdio.h>

//Function prototype
void test() //void doesn't return anything, unless if it's void main() function
{
    printf("This is for test! \n");
}
// WE CANNOT HAVE VOID FUNCTION WITH RETURN AT THE END! BE CAREFUL!
//Function call
int main()
{
    test(); //We are calling the test() function that we just created
    return 'a'; //functions must return something. After return it doesn't do anything else
    // We can also return 100 or return 'a', that doesn' make any difference 

}


//Also we can list the functions in the beginning and then define them after the main function: for example
void welcome();
void save();
void run();

void welcome()
{
    printf("Welcome! \n");
}
//This is quite beneficial when we are dealing with a long program and many functions

