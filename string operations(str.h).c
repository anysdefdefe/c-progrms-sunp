/* Program to perform various string operations */

#include <stdio.h>  //
#include <strings.h>  //

int main(void) {  // start of main

  char str1[100], str2[100];
  int len1, len2;
  int result;
  
  printf("enter the firt string:\n");
  scanf("%s", str1);

  printf("enter the second string:\n");
  scanf("%s", str2);
  
  len1 = strlen(str1);
  len2 = strlen(str2);

  printf("the lemgth of first string is %d\n", strlen(str1));
  printf("the length of second string is %d\n", strlen(str2));

  result = strcmp(str1, str2);

  if (result == 0) {
    printf("strings are equal!\n");
  } else {
    printf("strings are not equal!\n");
  }
  
  strcat(str1, str2);
  printf("the concatenated string is %s\n", str1);

}