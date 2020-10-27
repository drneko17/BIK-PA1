#include <stdio.h>
#include <math.h>

/* Program nalezne dokonala cisla mensi nez zadane n
 */
int main ( int argc, char * argv [] )
{
  int i, n, sum, intsqrt, j;
  
  printf ( "Zadejte limit:\n" );
  if ( scanf ( "%d", &n ) != 1 || n <=1 )
  {
    printf ( "Nespravny vstup.\n" );
    return 1;
  }

  for ( i = 2; i < n; i ++ )
  {
    /* Testujeme, zda i je dokonale cislo
     *
     * Vylepseni: 
     *  - testujeme pouze delitele mezi 2 a odmocninou z i
     *  - pokud najedeme delitele j, zapocteme jak j, tak i i/j
     *  - cislo 1 a odmocninu z i osetrime zvlast
     */
    sum = 1; /* jednicka je urcite delitelem */
    /* zde testujeme cisla pocinaje (odmocninou z i) a konce 2 (oboji vcetne)
     */ 
    intsqrt = (int)sqrt(i);
    for ( j = intsqrt; j > 1; j -- )
      if ( i % j  ==  0 )
        sum += j + i/j;
    /* Pokud je i druha mocnina nejakeho celeho cisla, zapocitala
     * se hodnota tohoto delitele v cyklu 2x. Proto ji nyni pripadne 
     * odecteme. (Ale zadne dokonale cislo neni 
     * druha mocnina celeho cisla.)
     */
    if ( i == intsqrt * intsqrt )
      sum -= intsqrt;
     
    if ( i == sum )
      printf ( "%d\n", i );
  }
  return 0; 
}
