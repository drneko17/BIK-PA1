/**
 * Read a string, write it back. Test for invalid input.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Program entry point
 */
int main(void) {
  /*
   * A simple 'string' - can store string up to 99 characters long.
   */ 
  char s[100];
  
  printf("Hi! This is your second program. Enter a string:\n");
  /*
   * scanf function may fail if there is not input or the input is invalid.
   * We use the return value to distinguish between success and failure.
   * See man 3 scanf for further details.
   */
  if ( scanf("%99s",s) == 1 )
    printf("the input string is: %s\n",s);
  else
    printf("no input given.\n" );
  return EXIT_SUCCESS;
}
