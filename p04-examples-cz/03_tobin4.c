#include <stdio.h>

/* Program precte cislo ze vstupu a zobrazi jej ve dvojkove podobe
 */

int main ( int argc, char * argv [] )
{
  unsigned int x, i, displayZero;
  
  printf ( "Zadejte kladne cele cislo:\n" );
  if ( scanf ( "%u", &x ) != 1 ) 
  {
    printf ( "Nespravny vstup.\n" );
    return 1;
  } 
  /* Reseni vypisu pozpatku: testujeme bity "shora"
   * - vytvorime masku s nejvyssim bitem nastavenym na 1
   * - postupne masku posouvame, vzdy o 1 pozici smerem vpravo  
   * masku prikladame k cislu x, pokud da nenula => zobrazime 1
   *
   * potlaceni zbytecnych uvodnich nul - pamatujeme si priznak, zda zobnrazovat nuly:
   * - na zacatku potlaceno
   * - po prvni zobrazene jednicce jiz nuly zobrazujeme (priznak nastavit)
   * - musime zvlast osetrit zobrazeni nuly pro vstupni cislo 0
   */

  displayZero = 0;
  for ( i = 1 << (sizeof (unsigned int)*8 - 1); i > 0; i >>= 1 )
    if ( x & i )
    {
      printf ( "1" );
      displayZero = 1;
    }  
    else if ( displayZero )
      printf ( "0" );
    
  if ( ! displayZero )
    printf ( "0" );
  printf ( "\n" ); 
   
  return 0; 
}
