#include <stdio.h>

int main (void){

    int a, b;
    if (scanf("%d %d", &a, &b) != 2){
        printf("Nespravny vstup.\n");
        return 1;
    }

    if (a>b){
        printf("%d %d\n", b, a);
    }
    else if (a == b){
        printf("%d\n", a);
    }
    else {
        printf("%d %d\n", a, b);
    }
    double avg;
    avg = (a+b)/2.0;
    printf("Prumer je: %f\n", avg);

    return 0;
}