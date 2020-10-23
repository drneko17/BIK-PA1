/** 
 * Test happy numbers, version #2. This version is correct and efficient.
 * See https://en.wikipedia.org/wiki/Happy_number for the definition of a happy number
 */
#include <stdlib.h>
#include <stdio.h>

/** 
 * Test a number, decide happy/unhappy numbers.
 * @param[in] x the number to test
 * @return 1 if the number is a happy number, 4 otherwise
 * @note the decision is based on the properties of happy numbers, 
 *  see https://en.wikipedia.org/wiki/Happy_number#Sequence_behavior for the explanation
 */
int happy(int x) {
  int  digit, square, sum, first;
  while (x!=4 && x!=1) {
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
  else if (happy(a)==1) 
    printf("%d is a happy number\n", a);
  else             
    printf("%d is not a happy number\n", a);
  return EXIT_SUCCESS;
}
