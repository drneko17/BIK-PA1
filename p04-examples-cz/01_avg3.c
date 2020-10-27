#include <stdio.h>

/* Program nacita cela cisla a vypocte z nich:
 *  - prumernou hodnotu
 *  - minimum
 *  - maximum
 * Zadavani vstupu konci se zadanim EOF Ctrl-D (Unix), nebo Ctrl-Z (Win)
 */
 
int main ( int argc, char * argv [] ) 
{
  int  x, n = 0, sum = 0, min = 0, max = 0;

  printf ( "Zadej data:\n" );
  /* Nekonecny cyklus
   */
  while ( 1 ) 
  {
    /* Pokud se nezdari cteni vstupu, pak 
     *  - uzivatel zadal nejaky nesmyslny vstup,
     *  - nebo je konec vstupu (EOF)
     *
     * V kazdem pripade konci iterace 
     */
    if ( scanf ( "%d", &x ) != 1 ) break;
    sum += x;
    if ( n == 0 || x < min ) min = x;
    if ( n == 0 || x > max ) max = x;
    n ++;
  }  
  /* Konec iterace - bud chybny vstup nebo EOF
   */
  if ( ! feof ( stdin ) )
  { 
    /* nebyl to EOF -> byl chybny vstup 
     */
    printf ( "Nespravny vstup.\n" );
    return 1;
  }
  /* EOF -> ok, zpracujeme data
   */ 

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
