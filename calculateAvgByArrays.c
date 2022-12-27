#include <stdio.h>

int main()
{
    int scores, temp;
    printf("\n \t Enter the number of your scores: \n");
    scanf("%d" , &scores);

    int scoresArray[scores]; 
    for (int i = 0; i < scores; i++)
    {
         printf("Score No. %d: " , i);
         scanf("%d" , &temp);
         scoresArray[i] = temp;
    }

    printf("\n\nYour scores:\n");
    int sum = 0;
    for (int i = 0; i < scores; i++)
    {
         printf("Score No. %d = %d \n", i, scoresArray[i]);
         sum += scoresArray[i];
    }
    printf("\n Average = %d \n\n" , sum/scores);

}