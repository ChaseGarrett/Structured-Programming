/*
Author:			    Chase Cummins
Date Created:	  2/15/17
Date Due: 		  2/20/17
Program Name:	  Lab 3.17 on p. 107
*/

// Exercise 3.17 asks the customer for account number, beginning balance, total of all charges, total of all credits, and allowed credit limit

#include <stdio.h>

int main(){
  int accountNum;
  float beginBalance, totalCharges, totalCredit, creditLimit, afterBalance = 0;

  printf("Enter account number (-1 to end): ");
  scanf("%d", &accountNum);

  while (accountNum != -1){
    printf("Enter beginning balance: ");
    scanf("%f", &beginBalance);
    printf("Enter total charges: ");
    scanf("%f", &totalCharges);
    printf("Enter total credits: ");
    scanf("%f", &totalCredit);
    printf("Enter credit limit: ");
    scanf("%f", &creditLimit);

    afterBalance = (beginBalance + (totalCharges - totalCredit));

    if (creditLimit < afterBalance){
      printf("Account: \t%d", accountNum);
      printf("\nCredit Limit: \t%.2f", creditLimit);
      printf("\nBalance: \t%.2f", afterBalance);
      puts("\nCredit Limit Exceeded.");
    }

    printf("\nEnter account number (-1 to end): ");
    scanf("%d", &accountNum);
  }
  return 0;
}
