/* Program to find reverse  */


#include <stdio.h>

int main(void) {
  int num, temp;
  printf("enter the number:\n");
  scanf("%d", &num);
  printf("the reversed number is:\n");
  while (num != 0) {
    temp = num % 10;
    printf("%d", temp);
    num = num / 10;
  }
}