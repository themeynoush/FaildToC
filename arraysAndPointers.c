#include<stdio.h>

int main()
{
  //create an Array
  int myArr[] = {2, 4, 6, 8};
  //define its pointer 
  int* ptr = NULL;
  ptr = myArr; //It can also be defined as  ptr = &myArr;
  
  //To print the index 0 of the array we can type either:
  printf("%d\n", myArr[0]);
  printf("%d\n", *(ptr+0)); //the content of the index of 0 
}