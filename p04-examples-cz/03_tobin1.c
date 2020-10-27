#include <stdio.h>

/* Program precte cislo ze vstupu a zobrazi jej ve dvojkove podobe
 */

int main ( int argc, char * argv [] )
{
  unsigned int x;
  
  printf ( "Zadejte kladne cele cislo:\n" );
  if ( scanf ( "%u", &x ) != 1 ) 
  {
    printf ( "Nespravny vstup.\n" );
    return 1;
  } 
  /* algoritmus prevodu: delime 2 a zapisujeme zbytky po deleni.
   */
  while ( x != 0 )
  {
    if ( x % 2 == 0 )
      printf ( "0" );
    else
      printf ( "1" );
    x = x / 2;  
  }
  printf ( "\n" ); 
  /* Problemy:
   * - cislo je pozpatku
   * - pro hodnotu 0 nic nevypise
   */
  return 0; 
}
