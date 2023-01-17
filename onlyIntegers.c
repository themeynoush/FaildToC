#include<stdio.h>

int main()
{
    int num;
    char term;
    printf("Enter a Num: (the only valid char type and then press enter)\n");
    if(scanf("%d%c", &num, &term) != 2 || term != '\n')
    printf("failure\n");
    else
    printf("Congrats! That was a valid integer followed by enter key!\n");
}