#include <stdio.h>

int swap (int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
    return 1;
}


int main (void){

    int a = 5;
    int b = 3;
    printf("a: %d\nb: %d\n", a, b);
    swap (&a, &b);
    printf("a: %d\nb: %d\n", a, b);


    return 0;
}