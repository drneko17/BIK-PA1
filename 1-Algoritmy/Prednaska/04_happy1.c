/** 
 * Test happy numbers, version #1. This version does not work 
 * correctly, it is unable to decide whether the number is 
 * unhappy. The user is prompted to control the iterations.
 * See https://en.wikipedia.org/wiki/Happy_number for the definition of a happy number
 */
#include <stdlib.h>
#include <stdio.h>

/** 
 * Test a number, decide happy/unhappy numbers.
 * @param[in] x the number to test
 * @return 1 if the number is a happy number, some other value if the 
 *  computation had been terminated by the user
 */
int happy(int x) {
  int  digit, square, sum, first;
  char c = 0;
  while (c!='q' && x!=1) {
    sum = 0; first = 1;
    while (x > 0) {
      digit = x%10;
      square = digit*digit;
      sum += square;
      if (first) {
        printf("%d",square);
        first = 0;
      }
      else 
        printf("+%d",square);
      x = x/10;
    }
    x = sum;
    printf(" = %d\n", x);
    printf("(Enter) to continue, ('q' Enter) to quit:\n");
    c = getchar();
  }
  return x;
}

/**
 * Program entry point
 */
int main(void) {
  int a;
  printf("Enter a positive integer:\n");
  if (scanf("%d", &a) != 1 )
    printf("not an integer.\n");
  else if (a<=0)
    printf("not positive.\n");
  else {
    getchar(); /* skip newline character after the input number */
    if (happy(a)==1) 
      printf("%d is a happy number\n", a);
    else             
      printf("%d is not a happy number, or the test was terminated\n", a);
  }  
  return EXIT_SUCCESS;
}
