// Write a program to calculate the sum of array elements by passing to a function 

#include <stdio.h>
float sum(float num[]);

int main() 
{
  float result;
  float num[] = {23.4, 55, 22.6, 3, 40.5, 18};

  // num array is passed to the sum() function
  result = sum(num); 
  printf("Result = %.2f \n", result);
  return 0;
}

float sum(float num[]) 
{
  float sum = 0.0;
  for (int i = 0; i < 6; i++) 
  {
    sum += num[i];
  }
  return sum;
}