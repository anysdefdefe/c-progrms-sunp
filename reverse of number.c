/* Program to find reverse of a number entered by the user*/

#include <stdio.h>

int main(void) { // start of main

  int num, temp; // declaring the required varaibles

  printf("enter the number:\n"); // taking a number as a input from the user
  scanf("%d", &num); // storing the user entered data in a variable

  printf("the reversed number is:\n"); // displaying the reversed number

  /* performing reversing operation*/
  while (num != 0) { //  start of while loop
    temp = num % 10;
    printf("%d", temp);
    num = num / 10;
  } // end of while loop

 return 0; // end of main

}