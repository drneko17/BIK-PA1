#include <stdio.h>
#include <string.h>
#include <cstdlib>


int main (void){
    

    int number, size;
    char *cernePocet = (char*) malloc(size);
    char *bilePocet = (char*) malloc(size);
    char *oddLine = (char*) malloc((number*size)+2);
    char *evenLine = (char*) malloc((number*size)+2);
    char *startEndLine = (char*) malloc((number*size)+2);



    printf("Zadejte pocet poli:\n");
    if(scanf("%d", &number) != 1 || number < 0){
        printf("Nespravny vstup.\n");
        return 1;
    };
    printf("Zadejte velikost pole:\n");
    if(scanf("%d", &size) != 1 || number < 0){
        printf("Nespravny vstup.\n");
        return 1;
    };

    cernePocet = (char*) malloc(size);
    bilePocet = (char*) malloc(size);
    oddLine = (char*) malloc((number*size)+2);
    evenLine = (char*) malloc((number*size)+2);
    startEndLine = (char*) malloc((number*size)+2);

    strcat(startEndLine, "+");
    for (int i = 0; i < (number*size); i++){
        strcat(startEndLine, "-");
    }
    strcat(startEndLine, "+");
    for (int i = 0; i < size;i++){
        strcat(cernePocet, "X");
        strcat(bilePocet, " ");
    }
    strcat(oddLine, "|");
    for (int i = 1; i <= number; i++){
        if (i%2 != 0){
            strcat(oddLine, bilePocet);
        }
        if (i%2 == 0){
            strcat(oddLine, cernePocet);
        }
    }
    strcat(oddLine, "|");
    strcat(evenLine, "|");
    for (int i = 1; i <= number; i++){
        if (i%2 != 0){
            strcat(evenLine, cernePocet);
        }
        if (i%2 == 0){
            strcat(evenLine, bilePocet);
        }
    }
    printf("%s\n", startEndLine);
    strcat(evenLine, "|");
    for (int i = 1; i <= number; i++){
        if(i%2 != 0){
            for(int x = 0; x < size; x++){
                printf("%s\n", oddLine);
            }
        }
        if(i%2 == 0){
            for (int x = 0; x < size; x++){
                printf("%s\n", evenLine);
            }
        }
    }
    printf("%s\n", startEndLine);
    return 0;

}