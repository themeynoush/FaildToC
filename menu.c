//https://labsticc.fr/en/directory

#include<stdio.h>

void main()
{
    int choise;

    printf(" \n \tWelcome! \n\n \tPlease choose an option:\n\n");
    printf("\tFor Descending Sort by Department [1] \t Team [2] \t Establishment [3] \n");
    printf("\tFor Ascending Sort by Department  [4] \t Team [5] \t Establishment [6]\n\n\n");

    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
        printf("Descending Sort by Department.\n");
        break;

        case 2:
        printf("Descending Sort by Team.\n");
        break;

        case 3:
        printf("Descending Sort by Establishment.\n");
        break;
        
        case 4:
        printf("Ascending Sort by Department.\n");
        break;
        
        case 5:
        printf("Ascending Sort by Team.\n");
        break;

        case 6:
        printf("Ascending Sort by Establishment.\n");
        break;

        
    default:
        printf("Error! Run the program again and enter a valid value1\n");
        break;
    }
}