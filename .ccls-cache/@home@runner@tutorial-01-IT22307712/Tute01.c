/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1;
  int m2;
  float avg;

  printf("Input mark1 : ");
  scanf("%d",&m1);
  printf("Input mark2 : ");
  scanf("%d", &m2);
  
  avg=(m1+m2)/2;
  
  printf("Average : %f", avg);

  
  return 0;
}

