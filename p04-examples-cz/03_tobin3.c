#include <stdio.h>

/* Program precte cislo ze vstupu a zobrazi jej ve dvojkove podobe
 */

int main ( int argc, char * argv [] )
{
  unsigned int x, i;
  
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
   */

  /* sizeof (unsigned int) je pocet bajtu pro cele neznamenkove cislo.
   * Po vynasobeni 8 dostaneme pocet bitu v tomto cisle
   * pokud hodnotu 1 posumeme o takovy pocet pozic vlevo (minus 1), mame 
   * cislo v binarnim tvaru 1 0 0 0 ... 0, kde jednicka je v nejvyssim radu
   *
   * V iteraci tuto masku posouvame (>>= 1). Pokud ma i hodnotu 000...01 a 
   * posuneme jej jeste jednou, dostaneme hodnotu 0 -> cyklus konci.
   */

  for ( i = 1 << (sizeof (unsigned int)*8 - 1); i > 0; i >>= 1 )
    if ( x & i )
      printf ( "1" );
    else
      printf ( "0" );
  printf ( "\n" ); 
  /* Nevyhoda zobrazuje zbytecne nuly vlevo
   */
  return 0; 
}
