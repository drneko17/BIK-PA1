#include <stdio.h>

int main (void){
    printf("ml' nob:\n");
    int n;
    scanf("%d", &n);
    char text1[] = "Qapla'\nnoH QapmeH wo' Qaw'lu'chugh yay chavbe'lu' 'ej wo' choqmeH may' DoHlu'chugh lujbe'lu'.";
    char text2[] = "Qapla'\nQu' buSHa'chugh SuvwI', batlhHa' vangchugh, qoj matlhHa'chugh, pagh ghaH SuvwI''e'.";
    char text3[] = "Qapla'\nqaStaHvIS wa' ram loS SaD Hugh SIjlaH qetbogh loD.";
    char text4[] = "Qapla'\nHa'DIbaH DaSop 'e' DaHechbe'chugh yIHoHQo'.";
    char text5[] = "Qapla'\nleghlaHchu'be'chugh mIn lo'laHbe' taj jej.";

if(n < 1 || n > 5){
    printf("luj\n");
}
else {
    if (n == 1){
        printf("%s\n", text1);
    }

    else if (n == 2){
        printf("%s\n", text2);
    }
    else if (n == 3){
        printf("%s\n", text3);
    }
    else if (n == 4){
        printf("%s\n", text4);
    }
    else if (n == 5){
        printf("%s\n", text5);
    }
}

    
    return 0;
}