#include <stdio.h>
#include <math.h>

int main (void){

    double a1, b1, c1; //rozmery prvni krabice
    double a2, b2, c2; //rozmery druhe krabice
    double d = 0.4; //tloustka steny krabice
    long int numero; //pocet krabic in total
    double v1, v2; //obsahy krabic
    int r1, r2, r3, r4, r5, r6; //reseni    

    
    printf("Zadejte strany krabice A:\n");
    scanf("%lf %lf %lf",&a1, &b1, &c1);
    if (a1 < 1 || b1 < 1 || c1 < 1){
        printf("Nespravny vstup.\n");
        return 1;
    }
    printf("Zadejte strany krabice B:\n");
    scanf("%lf %lf %lf",&a2, &b2, &c2);
        if (a2 < 1 || b2 < 1 || c2 < 1){
        printf("Nespravny vstup.\n");
        return 1;
    }
    v1 = a1*b1*c1;
    v2 = a2*b2*c2;
    //krabice A je vetsi nez krabice B
    if (v1>v2){
        a1 -= d;
        b1 -= d;
        c1 -= d;
        r1 = floor((a1/a2))*floor((b1/b2))*floor((c1/c2));
        r2 = floor((a1/a2))*floor((b1/c2))*floor((c1/b2));
        r3 = floor((a1/b2))*floor((b1/a2))*floor((c1/c2));
        r4 = floor((a1/b2))*floor((b1/c2))*floor((c1/a2));
        r5 = floor((a1/c2))*floor((b1/b2))*floor((c1/a2));
        r6 = floor((a1/c2))*floor((b1/a2))*floor((c1/b2));
        numero = r1;
        if (r2 > numero){
            numero = r2;
        }
        if (r3 > numero){
            numero = r3;
        }
        if (r4 > numero){
            numero = r4;
        }
        if (r5 > numero){
            numero = r5;
        }
        if (r6 > numero){
            numero = r6;
        }
        if (numero < 1){
            printf("Krabice nelze umistit do sebe.\n");
            return 0;
        }
        printf("Do A lze umistit %ld krabic(e) B.\n", numero);
        return 0;
    }
    //krabice B je vetsi nez krabice A
    if (v2>v1){
        a2 -= d;
        b2 -= d;
        c2 -= d;
        r1 = floor((a2/a1))*floor((b2/b1))*floor((c2/c1));
        r2 = floor((a2/a1))*floor((b2/c1))*floor((c2/b1));
        r3 = floor((a2/b1))*floor((b2/a1))*floor((c2/c1));
        r4 = floor((a2/b1))*floor((b2/c1))*floor((c2/a1));
        r5 = floor((a2/c1))*floor((b2/b1))*floor((c2/a1));
        r6 = floor((a2/c1))*floor((b2/a1))*floor((c2/b1));
        numero = r1;
        if (r2 > numero){
            numero = r2;
        }
        if (r3 > numero){
            numero = r3;
        }
        if (r4 > numero){
            numero = r4;
        }
        if (r5 > numero){
            numero = r5;
        }
        if (r6 > numero){
            numero = r6;
        }
        if (numero < 1){
            printf("Krabice nelze umistit do sebe.\n");
            return 0;
        }
        printf("Do B lze umistit %ld krabic(e) A.\n", numero);
        return 0;
    }
    return 0;
}