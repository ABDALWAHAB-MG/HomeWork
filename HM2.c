#include <stdio.h>

int main() {//second home work
  /* Declare variables. */
  int n, top = -1; // number of elements in the stack, top of the stack
   /* Get the number of elements in the stack from the user. */
  printf("Enter the number of elements in the stack: \n");
  scanf("%d", &n);
  int stack[n];  // stack array



  /* Enter the elements of the stack. */
  printf("Enter the elements of the stack: \n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &stack[++top]);
  }

  /* Print the stack before popping. */
  printf("The arry before popping: \n|");
  for (int i = 0; i < n; i++) {
    printf("%d|", stack[i]);
  }

  /* Pop the elements of the stack. */
  printf("\nThe arry after popping: \n|");
  for (int i = 0; i < n; i++) {
    printf("%d|", stack[top--]);
  }
}
