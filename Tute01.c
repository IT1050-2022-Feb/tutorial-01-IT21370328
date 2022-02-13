/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1,sub2,avg;

 
  printf("Enter the subject 1 marks-:");
  scanf("%d",&sub1);

 printf("Enter the subject 2 marks-:");
 scanf("%d",&sub2);

avg=(sub1+sub2)/2;

printf("Display Average-:%d ",avg);

  
  return 0;
}

