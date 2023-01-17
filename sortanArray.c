#include<stdio.h>

int main()
{
    int myNumbers[] = {25, 100, 75, 251};
    int i,userNum;

    printf("For ascending order, please press 1\n For descending order, please press 2\n");

    scanf("%d", &userNum);
    if (userNum==1)
    for (i = 0; i < 4; i++) 
    {
      printf("%d\n", myNumbers[i]);
    }
    else if (userNum==2)
    {
    for (i = 4; i >= 0 ; i--) 
    {
      printf("%d\n", myNumbers[i]);
    }
    }
    else
        printf("Run the program and enter a valid number");
}




