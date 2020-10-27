#include <stdio.h>

/* Program nacita cela cisla a vypocte z nich:
 *  - prumernou hodnotu
 *  - minimum
 *  - maximum
 * Zadavani vstupu konci se zadanim EOF Ctrl-D (Unix), nebo Ctrl-Z (Win)
 */
 
int main ( int argc, char * argv [] ) 
{
  int err, x, n = 0, sum = 0, min = 0, max = 0;

  printf ( "Zadej data:\n" );
  /* Zkusime nacist data. Navratovy kod funkce scanf 
   * si ulozime do promenne err. Zaroven jej porovname s cislem 1
   * (v jazycich vychazejicich z C lze prirazeni pouzit kdekoliv 
   * ve vyrazu, jen je potreba rozmyslet zavorkovani). Pokud scanf vraci 1,
   * mame platna data a ta v tele cyklu zpracujeme.
   */
  while ( (err = scanf ( "%d", &x )) == 1 ) 
  {
    sum += x;
    if ( n == 0 || x < min ) min = x;
    if ( n == 0 || x > max ) max = x;
    n ++;
  }  
  /* Konec iterace - bud chybny vstup nebo EOF
   * funkce scanf vratila bud 0 (spatna data na vstupu)
   * nebo EOF (symbolicka konstanta, zpravidla == -1) jako
   * informaci, ze na vstupu jiz nic neni.
   */
  if ( err != EOF )
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
