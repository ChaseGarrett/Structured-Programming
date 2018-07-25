/*
Author:			    Chase Cummins
Date Created:	  2/20/17
Date Due: 		  3/1/17
Program Name:	  Lab 4.28 on p. 155
*/

// Exercise 4.28 aims to calculate the weekly pay of a company's workers with a variety of pay grades.

#include <stdio.h>

int main(){
  int hours, overtime, payCode, itemsProduced;
  float overtimePay, totalEarnings, totalSales, weeklySales;

  puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
  scanf("%d", &payCode);
  
  while (payCode != -1){
    switch (payCode){
      case 1:
        puts("\nManager:");
        puts("Fixed Salary of $1000.00 earned for the week.");
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;

      case 2:
        puts("\nHourly Worker:");
        printf("Enter the hours worked: ");
        scanf("%d", &hours);
        if (hours <= 40){
          totalEarnings = hours * 7.5;
        }
        else{
          overtime = hours - 40;
          overtimePay = overtime * 11.25;
          totalEarnings = 400.00 + overtimePay;
        }

        printf("$%.2f earned this week.\n", totalEarnings);
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;

      case 3:
        puts("\nCommission Worker: ");
        printf("Enter the gross weekly sales: ");
        scanf("%f", &weeklySales);
        weeklySales *= 0.057;
        totalEarnings = 250 + weeklySales;
        printf("$%.2f earned this week through commission.\n", totalEarnings);
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;

      case 4:
        puts("\nPieceworker: ");
        printf("Enter the total units sold: ");
        scanf("%d",&itemsProduced);
        totalEarnings = itemsProduced * .50;
        printf("$%.2f earned this week through unit sales.\n", totalEarnings);
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;


      default:
        puts("That is not a valid pay code type.");
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;
      }
    scanf("%d", &payCode);
  }
  return 0;
}
