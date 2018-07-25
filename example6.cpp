#include <stdio.h>

void add(double num1, double num2);
void subtract(double num1, double num2);
void multiply(double num1, double num2);
void divide(double num1, double num2);
void printMenu(void);

int main(){
  void (*arithmetic[4])(double num1, double num2) = {add, subtract, multiply, divide};

  int choice = 0;
  double num1, num2;

  while(choice != 4){
    do{
      printMenu();
      scanf("%d", &choice);
    } while (choice < 0 || choice > 4);

    if (choice != 4){
      printf("\n\tEnter the first value: ");
      scanf("%lf", &num1);
      printf("\n\tEnter the second value: ");
      scanf("%lf", &num2);
      (*arithmetic[choice])(num1, num2);
    }
    else{
      printf("\n\nProgram Ended.");
    }
  }
  return 0;
}

void printMenu(void){
  printf("\n\tEnter a choice:"
  "\n\t  0 Add the two integers"
  "\n\t  1 Subtract the two integers"
  "\n\t  2 Multiply the two integers"
  "\n\t  3 Divide the two integers"
  "\n\t  4 End the program"
  "\n\t? ");
}

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
