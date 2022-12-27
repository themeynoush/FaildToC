//write a program that adds two matrixes

#include<stdio.h>

int main()
{
    int matrix1 [2][2] = {{1,1}, {1,1}};
    int matrix2 [2][2] = {{2,2}, {3,4}};

    printf ("\n%d ", matrix1[0][0] + matrix2[0][0]);
    printf (" %d ", matrix1[0][1] + matrix2[0][1]);

    printf ("\n%d ", matrix1[1][0] + matrix2[1][0]);
    printf (" %d \n", matrix1[1][1] + matrix2[1][1]);
}
