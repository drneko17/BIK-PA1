#include <stdio.h>
#include <string.h>
//#include <cstdlib>

int main (void){

    char a[] = "";
    char b[] = "pet";
    //komplet = (char*)malloc(6);
    //komplet = strcat(a, b);
    strcat(a, b);
    printf("%s \n", a);

    return 0;
}