#include <stdio.h>

int main (void){

    int x, n = 0, sum = 0, min = 0, max = 0;

    printf ("Zadej data:\n");
    while (scanf("%d", &x) == 1){
        sum += x;
        if (n == 0 || x < min){
            min = x;
        }
        if (n == 0 || x > max){
            max = x;
        }
        n++;
    }

    if (! feof(stdin)){
        printf("Nespravny vstup\n");
        return 1;
    }

    if (n == 0){
        printf("Nespravny vstup\n");
        return 1;
    }

    printf("Prumer: %f\n", 1.0*sum/n);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;


}