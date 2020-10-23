#include <stdio.h>

int main (void){

    int a, b, c;
    printf("Zadejte barvu v RGB formatu:\n");
    int task = scanf(" rgb ( %d , %d , %d )", &a, &b, &c);
    if (task == 0 || a<0 || a>255 || b<0 || b>255 || c<0 || c>255){
        printf("Nespravny vstup.\n");
        return 1;
    }
    printf("#%02X%02X%02X\n", a, b, c);


    return 0;
}
