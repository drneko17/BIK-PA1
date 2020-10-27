#include <stdio.h>
#include <math.h>

/* Program nalezne zadanych prvnich n dokonalych cisel
 */
int main ( int argc, char * argv [] )
{
  int n, i, candidate, j;
  
  
  printf ( "Zadejte pocet:\n" );
  if ( scanf ( "%d", &n ) != 1 || n < 0 )
  {
    printf ( "Nespravny vstup.\n" );
    return 1;
  } 
 /* Testujeme, dokonala cisla
  *
  * Trik:
  *  dokonala cisla maji vzdy zvlastni tvar v binarnim zapisu:  
  *  6     = 110(bin)
  *  28    = 11100(bin)
  *  496   = 111110000(bin)
  *  8128  = 1111111000000(bin)
  *
  *  tedy vzdy sekvence jednicek delky x bitu a pak sekvence nul 
  *  delky (x-1) bitu. Navic sekvence jednicek musi tvorit prvocislo
  *  (pro 6 je sekvence jednicek 11(bin)= 3 = prvocislo, ...       
  */

  i = 1;
  /* i predstavuje pocet nul v zapisu vytvareneho dokonaleho cisla.
   * n slouzi pro rizeni cyklu (pocet hledanych dokonalych cisel)
   */
  while ( n > 0 )
  {
    /* Tvar vytvareneho cisla:
     *        
     *   1 1 1 ... 1 0 0 0 ... 0
     *   \candidate/ \ i  nul /
     */
   
    /* Vytvorime cislo tvorene binarnimi jednickami, jednicek v zapisu bude (i+1)
     */ 
    candidate = 0;
    for ( j = 0; j <= i; j ++ )
      candidate |= 1 << j;
  
    /* Testujeme, zda candidate je prvocislo. Pokud ano, mame nalezene 
     * dokonale cislo. Testujeme delitele
     */ 
    for ( j = (int)sqrt(candidate); j > 1; j -- )
      if ( candidate % j == 0 )
        break;
    
    /* Pokud byl cyklus ukoncen pomoci break, bylo j > 1 a candiate neni prvocislo.
     * Naopak, pokud j == 1, je candidate prvocislo.
     */  
    if ( j == 1 )
    { 
      printf ( "%lld\n", (long long int)candidate << i );
      n --;
    }
    /* at uz i bylo nebo nebylo dokonale, v pristi iteraci budeme 
     * pracovat s poctem jednicek o 1 vyssim
     */ 
    i ++;  
    if ( i == sizeof ( int ) * 8 - 1 )
    {
      printf ( "Vyzaduje vetsi rozsah ciselneho typu.\n" );
      break;
    }
  }
  return 0; 
}
