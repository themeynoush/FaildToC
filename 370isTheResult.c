#include <stdio.h>

int main() 
{
 int i; //the int value that the user chooses
 int numenator, denominator;

  // Read in the integer from the user

  printf("\nEnter an integer from 1 to 9: \n");
  scanf("%d", &i);

  numenator = (i* 1000 + i*100 + i*10 + i);
  //printf("%d \n", numenator);

  denominator = i*3;
  //printf("%d \n", denominator);

  printf(" \n %d / %d + %d + %d = ", numenator, i, i, i);
  printf("%d \n", numenator/denominator);
  printf("Intresting! Huh!\n");
  
 return 0;
}



