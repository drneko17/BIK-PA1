#include <stdio.h>
#include <math.h>

int main (void){

    double x1, y1, r1; //kruznice 
    double x2, y2, r2; //kruznice 2
    double a, b, c; //trojuhelnik mezi stredy kruznic
    double area1, area2; //obsahy kruznic
    double overflow; //prekryti
    const double PI = 3.14159265358979323846;
    bool isOverflow = false;

    printf("Zadejte parametry kruznice #1:\n");
    if (scanf(" %lf %lf %lf", &x1, &y1, &r1) == 0){
        printf("Nespravny vstup.\n");
        return 1;
    }
    if (r1 <= 0){
        printf("Nespravny vstup.\n");
        return 1;
    }

    printf("Zadejte parametry kruznice #2:\n");
    if (scanf(" %lf %lf %lf", &x2, &y2, &r2) == 0){
        printf("Nespravny vstup.\n");
        return 1;
}
    if (r2 <= 0){
        printf("Nespravny vstup.\n");
        return 1;
    }

    area1 = PI*r1*r1;
    area2 = PI*r2*r2;
    a = x1-x2;
    b = y1-y2;
    c = sqrt(a*a+b*b);


    //inside
    if (x1==x2 && y1==y2 && r1==r2){
            overflow = area1;
            printf("Kruznice splyvaji, prekryv: %.6lf\n", overflow);
            return 0;
    }
    
    else if (c<=r1){
        //cela inside
        if (c>r2){
            overflow = area2;
            printf("Kruznice #2 lezi uvnitr kruznice #1, prekryv: %.6lf\n", overflow);
            return 0;
        }
        //dotek inside
        else if (c == r2){
            overflow = area2;
            printf("Vnitrni dotyk, kruznice #2 lezi uvnitr kruznice #1, prekryv: %.6lf\n", overflow);
            return 0;
        }
        else if (r2>r1+c){
            overflow = area1;
            printf("Vnitrni dotyk, kruznice #1 lezi uvnitr kruznice #2, prekryv: %.6lf\n", overflow);
            return 0;
        }

        //ujebava se ven
        else {
            isOverflow = true;
        }
    }

    //outside
    else{
        //cela outside
        if (c>r1+r2){
            printf("Kruznice lezi vne sebe, zadny prekryv.\n");
            return 0;
        }
        //dotek outside
        else if (c == r1+r2){
            printf("Vnejsi dotyk, zadny prekryv.\n");
            return 0;
        }
        else if (r2>c+r1){
            printf("Vnejsi dotyk, zadny prekryv.\n");
            return 0;
        }
        //prekryv
        else {
            isOverflow = true;
        }
    }
    if (isOverflow){
        double d1, d2;
        d1 = (r1*r1-r2*r2+c*c)/(2*c);
        d2 = (r2*r2-r1*r1+c*c)/(2*c);
        overflow = r1*r1*acos(d1/r1)-d1*sqrt(r1*r1-d1*d1)+r2*r2*acos(d2/r2)-d2*sqrt(r2*r2-d2*d2);
        printf("Kruznice se protinaji, prekryv: %.6lf\n", overflow);
        return 0;
    }
    return 0;
}
