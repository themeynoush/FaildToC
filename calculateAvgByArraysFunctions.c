//Write a program that receives the users' scores and gives the integer value of the average

#include <stdio.h>
#include<stdlib.h>

int scoresArray[100]; 
int scores;

void insertArray()
{
    int temp;
    printf("\n \t Enter the number of your scores: \n");
    scanf("%d" , &scores);
    
    for (int i = 1; i <= scores; i++)
    {
         printf("Score No. %d: " , i);
         scanf("%d" , &temp);
         scoresArray[i] = temp;
    }
}

int calAvg(int array[], int length)
{
    int sum = 0;
    for (int i = 1; i <= length; i++)
    {
        sum += array[i];
    }
    return sum/length;
}

void printArray()
{
    printf("\n\nYour scores:\n");
 
    for (int i = 1; i <= scores; i++)
    {
        printf("Score No. %d = %d \n", i, scoresArray[i]);
    }
    printf("\n Average = %d \n\n" , calAvg(scoresArray, scores));
}

int main()
{
    insertArray();
    printArray();
}