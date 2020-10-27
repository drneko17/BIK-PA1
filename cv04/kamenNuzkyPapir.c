#include <stdio.h>

int main (void){

    char p1, p2;
    if (scanf ("%c %c", &p1, &p2) != 2 || 
    (p1 != 'K' && p1 != 'N' && p1 != 'P') || 
    (p2 != 'K' && p2 != 'N' && p2 != 'P')){
        printf("Nespravny vstup.\n");
        return 1;
    }

    int winner;
    if (p1 == 'K' && p2 == 'S'){
        winner = 1;
    }
    else if (p1 == 'S' && p2 == 'P'){
        winner = 1;
    }
    else if (p1 == 'P' && p2 == 'K'){
        winner = 1;
    }
    else if (p1 == p2){
        winner = 0;
    }
    else {
        winner = 2;
    }

    switch(winner){
        case 0: printf("Remiza.\n"); break;
        case 1: printf("Hrac 1 vyhral.\n"); break;
        case 2: printf("Hrac 2 vyhral.\n"); break;
        default: printf("GAMEMACHINEBROKE\n"); break;
    }
    return 0;
}