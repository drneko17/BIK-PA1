#include <stdio.h>
#include <stdlib.h>

int isCtverec(int x){
    for (int i = 2; i <= (x/i); i++){
        if (x % (i*i) == 0){
            return 0;
        }
    }
    return 1;
}

int main (void){

    
    int array [4];
    int n;
    int i = 0;
    while (scanf("%d", &n) == 1){
        array[i] = n;
        printf("array[%d] = %d\n", i, array[i]);
        i ++;
    }

    return 0;
}