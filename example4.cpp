/*
Author:         Chase Cummins
Date Created:   2/20/17
Date Due:       3/1/17
Program Name:   Lab 4.28 on p. 155
*/

// Exercise 4.28 aims to calculate the weekly pay of a company's workers with a variety of pay grades.

#include <stdio.h>

int main(){
  //Initialize the variables we use throughout the program.
  int hours, overtime, payCode, itemsProduced;
  float overtimePay, totalEarnings, totalSales, weeklySales;

  //Ask the user to enter the pay code type of the employee, then scan that to the 'paycode' variable.
  puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
  scanf("%d", &payCode);
  
  //If it is not -1, i.e. our exit case, we enter a switch statement and match the case of the paycode.
  while (payCode != -1){
    switch (payCode){
      //If one, print manager and their fixed salary of $1000.00 earned for the week. Then prompt the next pay code,
      //Since it's assuemd that more than one pay code would be entered at a time.
      case 1:
        puts("\nManager:");
        puts("Fixed Salary of $1000.00 earned for the week.");
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;

      //In case two, print hourly worker and prompt the user to enter the hours worked, which we record into the 'hours' variable.
      //If less than 40 hours, i.e. no overtime, we multiply the hours by the pay and set that equal to 'totalEarnings.'  
      case 2:
        puts("\nHourly Worker:");
        printf("Enter the hours worked: ");
        scanf("%d", &hours);
        if (hours <= 40){
          totalEarnings = hours * 7.5;
        }
        //If grater than 40 hours, we subtract the 40 full-time hours from their hours specifically and write the result to 'overtime.'
        //We then calculate thier overtimePay by multiplying their overtime hours by the overtime rate, and add that to $400 to get
        //their total earnings for the week.
        else{
          overtime = hours - 40;
          overtimePay = overtime * 11.25;
          totalEarnings = 400.00 + overtimePay;
        }

        //Lastly, we print off their total earnings formatted to $####.## and prompt the user again to select a new paycode type.
        printf("$%.2f earned this week.\n", totalEarnings);
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;

      //In case three, print commission worker and prompt them to enter their gross weekly sales, recorded into 'weeklySales.'
      //We then calculate the percentage of their weekly sales they keep and add that to $250 to get their total earnings for the week.
      //Lastly, we print of their formatted total earnings and prompt the user again to select another paycode type.
      case 3:
        puts("\nCommission Worker: ");
        printf("Enter the gross weekly sales: ");
        scanf("%f", &weeklySales);
        weeklySales *= 0.057;
        totalEarnings = 250 + weeklySales;
        printf("$%.2f earned this week through commission.\n", totalEarnings);
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;

      //In case four, print pieceworker and prompt them to enter the total units sold, recorded as 'itemsProduced.'
      //We then multiply the items produced by their earning rate of .50 and record that number into 'totalEarnings.'
      //Lastly, we print their formatted earnigns for the week and prompt the user to select another paycode method.
      case 4:
        puts("\nPieceworker: ");
        printf("Enter the total units sold: ");
        scanf("%d",&itemsProduced);
        totalEarnings = itemsProduced * .50;
        printf("$%.2f earned this week through unit sales.\n", totalEarnings);
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;

      //If they do not enter a valid pay code type, we use the default case to tell the user they've made a mistake, 
      //and we prompt them to enter a correct number. At the end of this loop, we scan the input into 'paycode,'
      //priming the switch statement for the next execution of the code. When they break out of the switch statement,
      //we end the code with a return 0.
      default:
        puts("That is not a valid pay code type.");
        puts("\nEnter the pay code of the employee (1-Manager, 2-Hourly, 3-Commission, 4-Pieceworkers, -1 to Exit): ");
        break;
      }
    scanf("%d", &payCode);
  }
  return 0;
}
