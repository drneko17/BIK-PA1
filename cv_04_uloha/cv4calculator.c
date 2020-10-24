#include <stdio.h>
#include <math.h>

int main (void){

    double a, b;
    char c, sum;

    printf("Zadejte vzorec:\n");
    if (scanf("%lf %c %lf %c", &a, &c, &b, &sum) < 4){
        printf("Nespravny vstup.\n");
        return 1;
    }
    if ((c != '+' && c != '-' && c != '*' && c != '/') || sum != '='){
        printf("Nespravny vstup.\n");
        return 0;
    }
    if (c == '+'){
        printf("%g\n", a+b);
        return 0;
    }
    if (c == '-'){
        printf("%g\n", a-b);
        return 0;
    }
    if (c == '*'){
        printf("%g\n", a*b);
        return 0;
    }
    if (c == '/'){
        if (b == 0){
            printf("Nespravny vstup.\n");
            return 1;
        }
        printf("%g\n", floor(a/b));
        return 0;
    }
    return 0;
}