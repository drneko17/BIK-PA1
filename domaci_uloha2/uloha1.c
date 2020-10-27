#include <stdio.h>

int main (void){

    int k, cislo;
    printf("Poradi:\n");
    scanf("%d", &cislo);
    int delitel = 3;
    while (cislo > 1){
        if (cislo % 2 == 0){
            printf("Cislo je ctvercove\n");
            return 0;
        }
        if (cislo % delitel == 0){
            printf("%d", delitel);
            cislo = cislo/delitel;
        }
        if (cislo % delitel != 0){
            delitel = delitel + 1;
        }
    }

    return 0;
}