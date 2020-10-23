/** 
 * Find the greatest common divisor of two positive integers, naive algorithm
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * Find the greatest common divisor - a naive algorithm.
 *
 * @param[in] x
 * @param[in] y the two input numbers
 * @return gcd of x and y
 * @note Very inefficient, just a demonstration of a naive approach.
 */
int gcd(int x, int y)
{
  int d;
  if (x<y) 
    d=x; 
  else 
    d=y;
  while (x%d!=0 || y%d!=0) 
    d--;
  return d;
}

/**
 * Program entry point
 */
int main(void)
{
  int a, b;
  printf("Enter two positive integers:\n");
  if ( scanf("%d %d", &a, &b) != 2 )
    printf ( "two integers required.\n" );
  else if (a<=0 || b<=0)
    printf("not positive.\n");
  else
    printf("gcd(%d,%d)=%d\n", a, b, gcd(a,b));
  return EXIT_SUCCESS;
}
