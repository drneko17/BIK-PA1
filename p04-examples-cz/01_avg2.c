#include <stdio.h>

/* Program nacita cela cisla a vypocte z nich:
 *  - prumernou hodnotu
 *  - minimum
 *  - maximum
 * Zadavani vstupu konci se zadanim cisla 0
 */
 
 
int main ( int argc, char * argv [] ) 
{
  int  x, n = 0, sum = 0, min = 0, max = 0;
  

  printf ( "Zadej data:\n" );
  /* Nekonecny cyklus
   */
  while ( 1 ) 
  {
    if ( scanf ( "%d", &x ) != 1 )
    {
      printf ( "Nespravny vstup.\n" );
      return 1;
    }
    if ( x == 0 ) break; /* konec zadavani vstupu */ 
    sum += x;
    if ( n == 0 || x < min ) min = x;
    if ( n == 0 || x > max ) max = x;
    n ++;
  }  
  if ( n > 0 )
  {
    printf ( "Prumer: %f\n", (double)sum / n );
    printf ( "Min: %d\n", min );
    printf ( "Max: %d\n", max );
  }
  else
    printf ( "Prazdny vstup.\n" );   
  
  return 0; 
}
