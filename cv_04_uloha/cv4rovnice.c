#include <stdio.h>
#include <math.h>

int main (void){

    double a, b, c;
    char sign;
    double result;
    char rovnitko;
    printf("Zadejte rovnici:\n");
    if(scanf("%lf %c %lf %c %lf", &a, &sign, &b, &rovnitko, &c) != 5 || rovnitko != '='){
        printf("Nespravny vstup.\n");
        return 1;
    };
    if (sign == '/' && b == 0){
        printf("Nespravny vstup.\n");
        return 1;
    }
    switch(sign){
        case '+': (result = a + b) == c ? printf("Rovnice je spravne.\n") : printf("%g != %g\n", (result = a + b), c); break;
        case '-': (result = a - b) == c ? printf("Rovnice je spravne.\n") : printf("%g != %g\n", (result = a - b), c); break;
        case '*': (result = a * b) == c ? printf("Rovnice je spravne.\n") : printf("%g != %g\n", (result = a * b), c); break;
        case '/': floor((result = a / b)) == c ? printf("Rovnice je spravne.\n") : printf("%g != %g\n", (result = a / b), c); break;
        default: printf("Nespravny vstup.\n"); break;
    }
    return 0;
}