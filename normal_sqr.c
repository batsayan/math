/* C Program to Calculate Square of a Number */
 
#include<stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
  int number, Square;
  char *a = argv[1];

//  printf(" \n Please Enter any integer Value : ");
  //scanf("%d", &number);
  number = atoi(a);
  Square = number * number;
  
  printf("\n Square of a given number %d is  =  %d\n", number, Square);
 
  return 0;
}
