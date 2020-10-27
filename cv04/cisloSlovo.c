#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void){

    /*
    char a[] = "";
    char b[] = "pet";
    strcat(a, b);
    printf("%s \n", a);*/

    int number;
    int tisice = 0;
    int stovky = 0;
    int desitky = 0;
    int jednotky = 0;
    char celek [] = "";
    printf("Zadejte cislo v intervalu <0;9999>\n");
    if (scanf("%d", &number) != 1 || number < 0 || number > 9999){
        printf("Nespravny vstup.\n");
        return 1;
    }

    if (number > 999){
        tisice = floor(number/1000);
        switch (tisice){
            case 1: strcat(celek, "jeden tisic"); break;
            case 2: strcat(celek, "dva tisice"); break;
            case 3: strcat(celek, "tri tisice"); break;
            case 4: strcat(celek, "ctyri tisice"); break;
            case 5: strcat(celek, "pet tisic"); break;
            case 6: strcat(celek, "sest tisic"); break;
            case 7: strcat(celek, "sedm tisic"); break;
            case 8: strcat(celek, "osm tisic"); break;
            case 9: strcat(celek, "devet tisic"); break;
        }
    }
    /*
    else if (number > 99){
        stovky = floor(number/100);
        switch (stovky){
            case 1: strcat(stovka, "jeden tisic"); break;
            case 2: strcat(stovka, "dva tisice"); break;
            case 3: strcat(stovka, "tri tisice"); break;
            case 4: strcat(stovka, "ctyri tisice"); break;
            case 5: strcat(stovka, "pet tisic"); break;
            case 6: strcat(stovka, "sest tisic"); break;
            case 7: strcat(stovka, "sedm tisic"); break;
            case 8: strcat(stovka, "osm tisic"); break;
            case 9: strcat(stovka, "devet tisic"); break;
        }
    }
    else if (number > 9){
        desitky = floor(number/10);
        switch (desitky){
            case 1: strcat(desitka, "jeden tisic"); break;
            case 2: strcat(desitka, "dva tisice"); break;
            case 3: strcat(desitka, "tri tisice"); break;
            case 4: strcat(desitka, "ctyri tisice"); break;
            case 5: strcat(desitka, "pet tisic"); break;
            case 6: strcat(desitka, "sest tisic"); break;
            case 7: strcat(desitka, "sedm tisic"); break;
            case 8: strcat(desitka, "osm tisic"); break;
            case 9: strcat(desitka, "devet tisic"); break;
        }
    }
    else {
        jednotky = number;
        switch (jednotky){
            case 1: strcat(jednotka, "jeden tisic"); break;
            case 2: strcat(jednotka, "dva tisice"); break;
            case 3: strcat(jednotka, "tri tisice"); break;
            case 4: strcat(jednotka, "ctyri tisice"); break;
            case 5: strcat(jednotka, "pet tisic"); break;
            case 6: strcat(jednotka, "sest tisic"); break;
            case 7: strcat(jednotka, "sedm tisic"); break;
            case 8: strcat(jednotka, "osm tisic"); break;
            case 9: strcat(jednotka, "devet tisic"); break;
        }
    }*/

    printf("%s\n", celek);
    return 0;
}