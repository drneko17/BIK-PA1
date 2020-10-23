#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main (void){

    double x1, y1, r1; //kruznice 1
    double x2, y2, r2; //kruznice 2

    printf("Zadejte parametry kruznice #1:\n");
    scanf(" %lf %lf %lf", &x1, &y1, &r1);
    printf("Zadejte parametry kruznice #2:\n");
    scanf(" %lf %lf %lf", &x2, &y2, &r2);

    double prekryv;
    if (x1==x2 && y1==y2 && r1==r2){
        prekryv = PI*r1*r1;
        printf("Kruznice splyvaji, prekryv: %.6lf\n", prekryv);
        return 0;
    }

 
    
    else if (x1-r1<=x2-r2 && y1-r1<=y2-r2 && x1+r1>=x2+r2 && y1+r1>=y2+r2){
        double a, b, c;
        a = x1-x2;
        b = y1-y2;
        if (a<0){
            a = a * -1;
        }
        if (b<0){
            b = b * -1;
        }
        c = sqrt(a*a+b*b);
        prekryv = PI*r2*r2;
        if (r1 == c+r2){
            printf("Vnitrni dotyk, kruznice #2 lezi uvnitr kruznice #1. prekryv: %.6lf\n", prekryv);
            return 0;
        }
        
        printf("Kruznice #2 lezi uvnitr kruznice #1, prekryv: %.6lf\n", prekryv);
        return 0;
    }
    else if (x1-r1>=x2-r2 && y1-r1>=y2-r2 && x1+r1<=x2+r2 && y1+r1<y2+r2){
        double a, b, c;
        a = x1-x2;
        b = y1-y2;
        if (a<0){
            a = a * -1;
        }
        if (b<0){
            b = b * -1;
        }
        c = sqrt(a*a+b*b);
        prekryv = PI*r1*r1;
        if (r2 == c+r1){
            printf("Vnitrni dotyk, kruznice #1 lezi uvnitr kruznice #2. prekryv: %.6lf\n", prekryv);
            return 0;
        }
        printf("Kruznice #1 lezi uvnitr kruznice #2, prekryv: %.6lf\n", prekryv);
        return 0;
    }


    return 0;
}

