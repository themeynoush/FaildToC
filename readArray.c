//Ask the user to enter their name and the print a welcome message followed by their names!
#include <stdio.h>

int main()
{
//define the size of the Charachter
char myName[100];
printf("\nEnter your name:\n");
scanf("%s", myName);
printf("Welcome %s! \n", myName);
}
