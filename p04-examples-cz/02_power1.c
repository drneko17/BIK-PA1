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

  res = 1;
  for ( i = 0; i < n; i ++ )
    res *= a;

  /* printf: konverze je %f pro double i float (predavany float se podle C
   * normy interne roztahuje na double pri predavani pres vypustku)
   */
  printf ( "%f ^ %d = %f\n", a, n, res );
  return 0;
}

