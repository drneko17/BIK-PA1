#include <stdio.h>

/* Program nacte cislo a rozhodne, zda je dokonale. Dokonale cislo
 * je takove cislo, ktere se rovna souctu svych delitelu. Napr.
 * 6 je dokonale cislo: 6 = 3 + 2 + 1 .
 */

int main ( int argc, char * argv [] )
{
  int i, n, sum;
  
  printf ( "Zadejte prirozene cislo:\n" );
  if ( scanf ( "%d", &n ) != 1 || n <=1 )
  {
    printf ( "Nespravny vstup.\n" );
    return 1;
  }
  /* secteme vsechny delitele mensi nez n 
   * 
   * cyklus lze vylepsovat, aby vypocet bezel rychleji
   */
  sum = 0;
  for ( i = 1; i < n; i ++ )
    if ( n % i  ==  0 )
      sum += i;
 
  if ( sum == n )
    printf ( "%d je dokonale cislo.\n", n );
  else
    printf ( "%d neni dokonale cislo.\n", n );
  return 0; 
}
