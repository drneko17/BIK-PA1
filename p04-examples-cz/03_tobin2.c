#include <stdio.h>

/* Program precte cislo ze vstupu a zobrazi jej ve dvojkove podobe
 */

int main ( int argc, char * argv [] )
{
  unsigned int x, y, i;
  
  printf ( "Zadejte kladne cele cislo:\n" );
  if ( scanf ( "%u", &x ) != 1 ) 
  {
    printf ( "Nespravny vstup.\n" );
    return 1;
  } 
  /* Reseni vypisu pozpatku: "otocime" bity v x:
   */
  y = 0;
  for ( i = 0; x; i ++ )
  {
    /* V kazde iteraci presuneme nejnizsi bit z x do nejnizsiho bitu y
     *   x posuneme vpravo o 1 pozici
     *   y posuneme vlevo o 1 pozici
     */
     
    y <<= 1; 
    if ( x & 1 ) y |= 1;
    x >>= 1;
  }

  /* algoritmus prevodu: delime 2 a zapisujeme zbytky po deleni.
   */
  if ( y == 0 )
    printf ( "0" ); /* nulu osetrime zvlast */
  else  
    while ( i -- ) /* celkem jsme pri otaceni zkopirovali i bitu. Tento while cyklus probehne i-krat */
    {
      if ( y % 2 == 0 )
        printf ( "0" );
      else
        printf ( "1" );
      y = y / 2;  
    }
  printf ( "\n" ); 
  return 0; 
}
