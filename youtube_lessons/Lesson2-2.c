//Write a program that gets two numbers from a user and swaps them

#include <stdio.h>

int main()
{
    printf("\t Please enter two numbers: ");
    int first_number;
    int second_number;
    scanf("%d %d", &first_number, &second_number);
    
    int temp;
    temp = first_number;
    first_number = second_number;
    second_number = temp;
    
    printf("\n The first number is: %d \t The second number is: %d", first_number , second_number);
    
    printf("\n Hehe! I was messing with you! I just swaped your numbers! ٩(｡•́‿•̀｡)۶ \n \n");
}