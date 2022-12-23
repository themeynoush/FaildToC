//Using switch in c

#include <stdio.h>
#include <stdbool.h>

void main()
{
    int option;
    printf("\n Welcome \n [1] Start \n [2] Save \n [3] Exit");
    printf("\n \t Please enter your choise:  ");
    scanf("%d", &option);
    switch (option) //What we are going to check the conditions on
    {
    case 1:  //this is equvalent of saying (if option ==1)
        printf("\n Start! \n");
        break;
    case 2:
        printf("\n Save! \n");
        break;
    case 3:
        printf("\n Exit! \n");
        break;
    
    default:
        printf("Wrong option!");


        break;
    }

}