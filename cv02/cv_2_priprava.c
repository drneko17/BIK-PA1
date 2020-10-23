#include <stdio.h>

int main (void){

    int a = 15, b = 7;

    printf("Zadej dve cisla:\n");
    scanf("%d %d", &a, &b);

    printf( "%d + %d = %d\n", a, b, a + b);
    printf( "%d - %d = %d\n", a, b, a - b);
    printf( "%d * %d = %d\n", a, b, a * b);
    printf( "%d / %d = %d\n", a, b, a / b);
    printf( "%d %% %d = %d\n", a, b, a % b);

    return 0;
}