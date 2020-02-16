/*
Author:         Chase Cummins
*/

#include <stdio.h>
#include <math.h>

int primeNum(int numIn);

int main(){
  int num1, count = 0;
  puts("Enter a value and I will list off the prime numbers up to said number");
  printf("Value: ");
  scanf("%d", &num1);

  printf("\nThe prime numbers between 0 and %d inclusive are: \n", num1);

  for(int i = 2; i<=num1; i++){
    if (primeNum(i)==0){
      continue;
    }
    else {
      printf("%7d", i);
      count++;
      if (count % 10 == 0){
        puts("");
      }
    }
  }
  printf("\n\n Total count of prime numbers is %d.\n", count);
  return 0;
}

int primeNum(int numIn){
  int isPrime, j, max;
  max = ceil(numIn/2);
  for(j=2; j <=max; j++){
    if(numIn % j == 0){
      isPrime = 0;
      break;
    }
    else{
      isPrime = 1;
      continue;
    }
  }
    return isPrime;
}
