#include <stdio.h>

int main() 
{
 long long int i; //the int value that the user chooses
 long long int numenator, denominator;

  // Read in the integer from the user

  printf("\nEnter an integer from 1 to 999999999999999: \n");
  scanf("%lld", &i);

  numenator = (i* 1000 + i*100 + i*10 + i);
  //printf("%d \n", numenator);

  denominator = i*3;
  //printf("%d \n", denominator);

  printf(" \n %lld / %lld + %lld + %lld = ", numenator, i, i, i);
  printf("%lld \n", numenator/denominator);
  printf("Intresting! Huh!\n");
  
 return 0;
}



