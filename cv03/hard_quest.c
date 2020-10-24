#include <stdio.h>

int main (void){

    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    printf("a = %d\nb = %d\nc = %c\n", a, b, c);

    if (c == '+'){
        printf("%d + %d = %d\n", a, b, a+b);
        return 0;
    }
    return 0;
}