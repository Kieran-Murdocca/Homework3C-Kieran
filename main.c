// Author: Kieran Murdocca kkm5754@psu.edu
// Collaborator: Peter Schulman pks5481@psu.edu
// Section 004
// Homework 3

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int digit_sum(int n) {
  if (n==0)
    return 0;
  else if (n<0)
    return 0;
  return (n % 10 + digit_sum(n/10));
}

int main() {
  int num= atoi(readline("Enter an int: "));
  int result = digit_sum(num);
  printf("sum of digits of %d is %d.\n", num, result);
  return 0;
}