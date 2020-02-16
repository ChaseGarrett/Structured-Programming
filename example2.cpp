/*
Author:           Chase Cummins
Date Created:     1/20/17
Date Due: 	  1/30/17
Program Name:	  Lab 2.19 on p. 66
*/

//Lab 2.19 asks for three integers, then prints the sum, average, product, the smallest, and the largest value.
#include <stdio.h>
//#include <stdlib.h>

int main (){
  printf("\nLab 2.19:");

  int num1;
  int num2;
  int num3;

  printf("\nEnter the first integer: ");
  scanf("%d", &num1);
  printf("Enter the second integer: ");
  scanf("%d", &num2);
  printf("Enter the third integer: ");
  scanf("%d", &num3);

  int sum = num1 + num2 + num3;
  int average = sum / 3;
  int product = num1 * num2 * num3;

  //This is the series of logic tests to determind the largest and smallest integer
  int largest = num1;
  int smallest = num2;
  if (num2 > num1) {
    largest = num2;
    smallest = num1;
  }
  if (num3 > largest) {
    largest = num3;
  }
  if (num3 < smallest) {
    smallest = num3;
  }

  printf("\nSum is %d", sum);
  printf("\nAverage is %d", average);
  printf("\nProduct is %d", product);
  printf("\nSmallest is %d", smallest);
  printf("\nLargest is %d\n", largest);

  return 0;
}
