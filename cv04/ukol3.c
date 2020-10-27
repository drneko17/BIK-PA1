#include <stdio.h>

int main (void){

    int day;
    if (scanf("%d", &day) != 1 || day < 1 || 7 < day){
        printf("Nespravny vstup\n");
        return 1;
    }


    switch(day){
        case 1: printf("Pondeli\n"); break;
        case 2: printf("Utery\n"); break;
        case 3: printf("Streda\n"); break;
        case 4: printf("Ctvrtek\n"); break;
        case 5: printf("Patek\n"); break;
        case 6: ;
        case 7: printf("Vikend\n"); break;
    }
    return 0;
}