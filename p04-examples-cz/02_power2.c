#include <stdio.h>

/* program precte ze vstupu cisla a (desetinne) a n (cele) a zobrazi vysledek umocneni a^n
 */

int main ( int argc, char * argv [] )
{
  double a, res;
  int    n, i;
  
  printf ( "Zadejte a a n:\n" );
  /* scanf: na typ double - konverze je %lf, %f je pro typ float */
  if ( scanf ( "%lf %d", &a, &n ) != 2 || n < 0 )
  {
    printf ( "Nespravny vstup.\n" );
    return 1;
  }

  printf ( "%f ^ %d = ", a, n );

   /* vylepsene reseni, iterativni. Spocte a ^ n, iteraci se provadi pouze tolik,
    * kolik je bitu exponentu. v promenne a se generuji mocniny a ^ 1, a ^ 2, a ^ 4,
    * a ^ 8, do vysledku se zapoctou pouze pokud je odpovidajici bit exponentu nastaven na 1.
    * bity exponentu se testuji pomoci maskovani (maska i).
    */
  res = 1; 
  for ( i = 1; i <= n; i <<= 1 )
  {
    if ( n & i )
      res *= a;
    a *= a;
  }

  /* printf: konverze je %f pro double i float (predavany float se podle C
   * normy interne roztahuje na double pri predavani pres vypustku)
   */
  printf ( "%f\n", res );
  return 0;
}

