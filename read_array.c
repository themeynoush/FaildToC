//Ask the user to enter their name and the print a welcome message followed by their names!
#include <stdio.h>

int main()
{
char myName[100]; //define the size of the Charachter
printf("\nEnter your name:\n");
scanf("%s", myName); //read the user's name
printf("Welcome %s! \n", myName); //print the name out
}
