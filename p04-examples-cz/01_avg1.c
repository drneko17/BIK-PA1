#include <stdio.h>

/* Program nacte n celych cisel a vypocte z nich:
 *  - prumernou hodnotu
 *  - minimum
 *  - maximum
 */
 
 
int main ( int argc, char * atgv [] ) 
{
  int i, x, n, sum, min = 0, max = 0;
  
  printf ( "Zadej n:\n" );
  if ( scanf ( "%d", &n ) != 1 || n <= 0 ) 
  {
    printf ( "Nespravny vstup.\n" );
    return 1;
  }

  printf ( "Zadej data:\n" );
  sum = 0;
  for ( i = 0; i < n; i ++ )
  {
    if ( scanf ( "%d", &x ) != 1 )
    {
      printf ( "Nespravny vstup.\n" );
      return 1;
    }
    sum += x;
    if ( i == 0 || x < min ) min = x;
    if ( i == 0 || x > max ) max = x;
  }  
  printf ( "Prumer: %f\n", (double)sum / n );
  printf ( "Min: %d\n", min );
  printf ( "Max: %d\n", max );
  
  return 0; 
}
