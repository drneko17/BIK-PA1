#include <stdio.h>

int main (void){

    /*printf("Hello World!\n");
    printf("o  o\n ?\n\\__/\n   u");*/


    //prakticke ukoly 4!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    /*int a = 3;
    int b = 5;

    if(scanf("%d %d", &a, &b) != 2 || a <=0 || b<=0){
        printf("Nesrpavny vstup\n");
        return 1;
    };

    int obsah = a * b;
    int obvod = a + a + b + b;

    int isSquare = a == b ? 1 : 0;

    printf("Obsah zadaneho obdelniku je: %d\n", obsah);
    printf("Obvod zadaneho obdelniku je: %d\n", obvod);
    printf("Zadane strany tvori ctverec?", isSquare == 1 ? "'Y' : 'N')
    return 0;*/

    //prakticke ukoly 6!!!!!!!!!!!!!!!!!!!!!!
    
    /*int n; //poradi clenu
    int x; //n-ty clen
    printf("Zadejte n-ty clen posloupnosti 1, 2, 3, 4, 5, 6,\n");
    scanf("%d",&n);
    x = n*1;
    printf("%d-ty clen posloupnosti je %d\n", n, x);

    return 0;*/


    //uloha - Kolik mi je let?

    /*int todayYear, todayMonth, todayDay, birthYear, birthMonth, birthDay;

    printf("Napis aktualni rok, mesic a den\n");
    scanf("%d %d %d", &todayYear, &todayMonth, &todayDay);

    printf("Napis sve datum narozeni ve tvaru rok, mesic, den \n");
    scanf("%d %d %d", &birthYear, &birthMonth, &birthDay);

    int diffYear = todayYear - birthYear;
    int diffMonth = todayMonth - birthMonth;
    int diffDay = todayDay - birthDay;

    diffMonth = diffDay < 0 ? diffMonth - 1 : diffMonth;
    diffYear = diffMonth < 0 ? diffYear - 1 : diffYear;

    printf("Jsem stary: %d let %d mesicu %d dni\n", diffYear, diffMonth, diffDay);
    return 0;*/

    //tezsi uloha 1!!!!!!!!!!
    /*int a, b ,c;
    printf("Napis hodnoty a, b, c!");
    scanf("%d %d %d", &a, &b, &c);

    int max = a > b ? a : b;
    max = max > c ? max : c;

    int min = a > b ? b : a;
    min = min > c ? c : min;

    int mid = (a + b  + c) - (max + min);
    printf("max je %d\nmid je %d\nmin je %d\n", max, mid, min);
    return 0;*/
}