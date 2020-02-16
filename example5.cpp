/*
Author:         Chase Cummins
*/

#include <stdio.h>
#include <math.h>

//This program is responsible for finding all prime integers from 0 to n, where n is set by the user.
int primeNum(int numIn);

int main(){
  //Initialize the variables num1 and count. Since num1 is scanned in by the user, we don't need to set it to 0, like we do with count.
  //Prompt the user to enter a number, then set 'num1' to the interger they input.
  int num1, count = 0;
  puts("Enter a value and I will list off the prime numbers up to said number.");
  printf("Value: ");
  scanf("%d", &num1);

  //Start the result of the program by stating the prime numbers between 0 and our specified n are listed below, then proceed with the
  //calculations necessary to determine those numbers.
  printf("\nThe prime numbers between 0 and %d inclusive are: \n", num1);

  //We are going to enter a for loop between 2 and our number. We jump into a function that returns 0 if the number is prime,
  //and 1 if the number isn't prime. If it isn't prime, we kick out of the for loop. If it is prime however, we print the number
  //with 7 digits, just to align everything neatly. We also increment count, adding a newline ever 10th number, for alignment.
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
  //At the end of the function, print two new lines and the result of the function, specifically, the number of primes
  //between 0 and number 'n' specified by the user.
  printf("\n\n Total count of prime numbers is %d.\n", count);
  return 0;
}

int primeNum(int numIn){
  //Initialize isPrime, our psuedo-boolean integer variable, j, and max. Divide numIn by 2, round up, and set that 
  //number to the variable max. We do this because a number cannot be evenly divided by anything larger than half of itself.
  int isPrime, j, max;
  max = ceil(numIn/2);
  for(j=2; j <=max; j++){
    //While looping from 2 to half of numIn, test if numIn evenly divides j, if it does, it isn't prime and we return a 0. 
    if(numIn % j == 0){
      isPrime = 0;
      break;
    }
    //If j never evenly divides numIn, then we have a prime number and we return a 1.
    else{
      isPrime = 1;
      continue;
    }
  }
  //Lastly, we return the value we calculated in this method, being whether or not numIn is prime.
  return isPrime;
}
