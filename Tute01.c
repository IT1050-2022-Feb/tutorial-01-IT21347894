/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
 {
   float mark1,mark2,total;

  printf("Enter marks of the 1st subject: ");
  scanf("%f",&mark1);

  printf("Enter marks of the 2nd subject: ");
  scanf("%f",&mark2);

  total=mark1+mark2;

  printf("Total marks: %.2f",total);
  
  return 0;
}

