//write a program that asks the user for two matrixes and add those values

#include<stdio.h>

void print( int max, int arr[max][max])
{
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            printf(" %d " , arr[i][j]);
        }
        printf("\n");        
    } 
}

int main()
{
    int matrix1 [2][2];
    int matrix2 [2][2];
    int matrix3 [2][2];

    printf("Matrix 1: \n");

    for (int i = 0 ; i < 2; i++)
    {
        for (int j = 0 ; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        } 
    }

    printf("Matrix 2: \n");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }   
    } 
    
    //sum

    printf("Matrix 3: \n");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           matrix3[i][j] = matrix1[i][j]+ matrix2[i][j];
        }   
    } 
    print(2 , matrix3);
}