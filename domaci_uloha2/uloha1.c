#include <stdio.h>
#include <cstdlib>

int isCtverec(int x){
    for (int i = 2; i <= (x/i); i++){
        if (x % (i*i) == 0){
            return 0;
        }
    }
    return 1;
}


int main (void){

    int k;
    int res;
    int *array;
    int last = 0;
    int lastNumber = 0;
    array = (int*)malloc(1000000 * sizeof(int));
    printf("Poradi:\n");

    while ((res = scanf("%d", &k)) == 1){  
        if (k < 1){
            printf("Nespravny vstup.\n");
            return 1;
        }
        int i = last;
        //int i = 0;
        int number = lastNumber;
        if (array[k-1] == 0){
            while (i < k){
                number += 1;
                if (isCtverec(number) == 1){
                    array[i] = number;
                    lastNumber = number;
                    last = i;
                    i += 1;
                }
            }
        }
        printf("= %d\n", array[k-1]);
    }
    if (res == EOF){
        return 0;
    }
    if (res != 1){
        printf("Nespravny vstup.\n");
        return 1;
    }
 

    return 0;
}