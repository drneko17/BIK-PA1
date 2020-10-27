#include <stdio.h>
#include <math.h>

#define EPS 1e-6


int main (void){

    double a1, b1, c1;
    double a2, b2, c2;
    double a, b, c;
    double D, x1, x2;

    if (scanf("%lf x^2 + %lf x + %lf = %lf x^2 + %lf x + %lf", &a1, &b1, &c1, &a2, &b2, &c2) != 6){
        printf("Nespravny vstup.\n");
        return 1;
    }

    a = a1 - a2;
    b = b1 - b2;
    c = c1 - c2;

    D = b*b - 4*a*c;

    if ( D < 0 ){
        printf("Neexistuje reseni v R.\n");
        return 1;
    }
    D = sqrt(D);

    x1 = (-a - D)/(2*a);
    x2 = (-a + D)/(2*a);

    if (D < 0){
        printf("Neexistuje reseni v R.\n");
        return 1;
    }


    //fabs - absolutni hodnota
    //rozdil s relativni chybou
    if ( fabs(x1 - x2) <= EPS (fabs(x1) + fabs(x2))){
        printf("x = %g\n", x1);
        return 0;
    }
    if (x1 != x2){
        printf("x1 = %g, x2 = %g\n", x1, x2);
        return 0;

    }


    return 0;
}
