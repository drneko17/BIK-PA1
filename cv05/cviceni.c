#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MINS -10.000
#define MAXS 10.000
#define DIFF 0.5


int main (void){
    
    srand(time(NULL));

    double guessX, guessY, currentD, lastD;    
    double x = ((double)rand() / RAND_MAX) * (MAXS-MINS) + MINS;
    double y = ((double)rand() / RAND_MAX) * (MAXS-MINS) + MINS;
    lastD = sqrt(pow(x,2)+pow(y,2));

    printf("X: %.3lf\nY: %.3lf\n", x,y);
    scanf("%lf %lf", &guessX, &guessY);

    while (1){
        int skenos = scanf("%lf %lf", &guessX, &guessY);
        currentD = sqrt(pow(guessX-x,2)+pow(guessY-y,2));
        if (skenos == EOF){
            break;
        }
        if (sqrt(pow(x-guessX,2)+pow(y-guessY,2)) < DIFF){
            printf("You won, retard\n");
            break;
        }
        if (currentD > lastD){
            printf("too far away\n");
        }else {
            printf("getting closer\n");
        }
        lastD = currentD;
    }


    return 0;
}