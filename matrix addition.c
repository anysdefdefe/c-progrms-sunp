/*Program to perform Matrix Addition */

#include <stdio.h>

int main(void) {

  int a[50][50], b[50][50], c[50][50], i, j, m, n, p, q;  // declaring the required variables

  printf("enter the order of matrix A:\n");  // taking user input from the user
  scanf("%d%d", &m, &n);  // storing the user input in a variable
  printf("enter the order of matrix B:\n");  // taking user input from the user
  scanf("%d%d", &p, &q);  // storing the user input in a variable

  /* Checking the basic for performing matrix addition */
  if (m != p || n != q) {
    printf("\t\tSORRy!\nmatrix addition not possible!\n");
    exit(0);
  } else {
    printf("enter the elements for matrix A:\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
      }
    }
    printf("enter the elements for matrix B:\n");
    for (i = 0; i < p; i++) {
      for (j = 0; j < q; j++) {
        scanf("%d", &b[i][j]);
      }
    }
    printf("matrix A is displayed as:\n");
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        printf("%d\t", a[i][j]);
      }
      printf("\n");
    }
    printf("\nmatrix B is displayed as:\n");
    for (i = 0; i < p; i++) {
      for (j = 0; j < q; j++) {
        printf("%d\t", b[i][j]);
      }
      printf("\n");
    }
    printf("\nhere's ur result\nMATRIX ADDITION\n");
    c[i][j] = 0;
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        c[i][j] = a[i][j] + b[i][j];
      }
    }
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        printf("%d\t", c[i][j]);
      }
       printf("\n");
    }
  }
}