
//Write a program that has a menu and reads a value from the user functions accordingly
#include <stdio.h>
#include <stdbool.h>

void main()
{
    int option;
    printf("\n Welcome \n [1] Start \n [2] Save \n [3] Exit");
    printf("\n \t Please enter your choise:  ");
    scanf("%d", &option);

    if(option == 1)
    {
        printf("\n Start");
    }
    else if(option == 2)
    {
        printf("\n Save");
    }
    //Accoridng to Logial Or rule
    //true or true = true
    else if (option >=100 || option != 4) //if option was greater than 100 or the opposite of  4 Exit
    {
        printf("\n Exit");
    }
}
