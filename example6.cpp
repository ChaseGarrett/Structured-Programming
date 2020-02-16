/*
Author:         Chase Cummins
*/

#include <stdio.h>

//This is where we declare the functions we're using within the program. The most important being printMenu(), a function
//that will retun a menu so that the user may select a fucntion from a menu to execute. This program behaves like a
//simple calculator.
void add(double num1, double num2);
void subtract(double num1, double num2);
void multiply(double num1, double num2);
void divide(double num1, double num2);
void printMenu(void);

int main(){
  //We begin the program and specify the arithmetic array of functions, all of which require two doubles. The important
  //part of this program is that the functions are all stored within an array.
  void (*arithmetic[4])(double num1, double num2) = {add, subtract, multiply, divide};

  //Initialize the users choice to zero as to clear the value of the choice variable in memory to prevent any errors in the code.
  //We also initialize the num1 and num2 variables for use in the code.
  int choice = 0;
  double num1, num2;

  //We specify that, while the code is not equal to 4, our default case, we print the menu and scan the user's input for their choice.
  //We continue normally with the code if the choice is between 0 and 4, i.e. a valid choice.
  //If they enter a valid choice, we prompt the user to enter two values, recorded into the 'num1' and 'num2' variables.
  while(choice != 4){
    do{
      printMenu();
      scanf("%d", &choice);
    } 
    while (choice < 0 || choice > 4);
    if (choice != 4){
      printf("\n\tEnter the first value: ");
      scanf("%lf", &num1);
      printf("\n\tEnter the second value: ");
      scanf("%lf", &num2);
      //We then run the function, within the arithmetic array, decided by the user.
      (*arithmetic[choice])(num1, num2);
    }
    //If the user doesn't give a valid choice for arithmetic, we end the program.
    else{
      printf("\n\nProgram Ended.");
    }
  }
  return 0;
}

//The printMenu function is responsible for printing the choices anytime it is called for the user.
void printMenu(void){
  printf("\n\tEnter a choice:"
  "\n\t  0 Add the two integers"
  "\n\t  1 Subtract the two integers"
  "\n\t  2 Multiply the two integers"
  "\n\t  3 Divide the two integers"
  "\n\t  4 End the program"
  "\n\t? ");
}

//The following are simple arithmetic calculations. Each returning the phrase associated with the arithmetic and the number, 
//rounded to the nearest thousandths place decimal, denoted by the %.4f.
void add(double num1, double num2){
  double result;
  result = num1 + num2;
  printf("\n\tThe sum of the two numbers is %.4f\n", result);
}

void subtract(double num1, double num2){
  double result;
  result = num1 - num2;
  printf("\n\tThe difference of the two numbers is %.4f\n", result);
}

void multiply(double num1, double num2){
  double result;
  result = num1 * num2;
  printf("\n\tThe product of the two numbers is %.4f\n", result);
}

void divide(double num1, double num2){
  double result;
  result = num1 / num2;
  printf("\n\tThe quotient of the two numbers is %.4f\n", result);
}
