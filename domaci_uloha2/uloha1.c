#include <stdio.h>

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
    printf("Poradi:\n");

    int lastK, lastNumber, i, number;
    int run = 1;
    while ((res = scanf("%d", &k)) == 1){
        if (run == 2){
            if (k < 1){
                printf("Nespravny vstup.\n");
                return 1;
            }
            if (k == lastK){
                number = lastNumber;
            } else if (k > lastK){
                i = lastK;
                number = lastNumber;
                while (i < k){
                    number += 1;
                    if (isCtverec(number) == 1){
                        i += 1;
                    }
                }
            } else if (k < lastK){
                i = 0;
                number = 0;
                while (i < k){
                    number += 1;
                    if (isCtverec(number) == 1){
                        i += 1;
                    }
                }
            }            
        }
        else {
            if (k < 1){
                printf("Nespravny vstup.\n");
                return 1;
            }
            i = 0;
            number = 0;
            while (i < k ){
                number += 1;
                if (isCtverec(number) == 1){
                    i += 1;
                }
            }
        }
        printf("= %d\n", number);
        run = 2;
        lastK = k;
        lastNumber = number;
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