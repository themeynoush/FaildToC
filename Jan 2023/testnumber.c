#include<stdio.h>

int main()
{
    int num;
    char term;
    if(scanf("%d%c", &num, &term) != 2 || term != '\n')
    printf("failure\n");
    else
    printf("valid integer followed by enter key\n");
}