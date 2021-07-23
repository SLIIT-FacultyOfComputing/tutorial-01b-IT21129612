/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1;
  int sub2;
  int sum;
  float avg;

  sub1 = 50;   //assume the value to the sub1//
  sub2 = 40;   //assume the value to the sub2//
  sum = sub1 + sub2;
  avg = (sum/2);
  printf("The average is %f\n:",avg);

  
  return 0;
}

