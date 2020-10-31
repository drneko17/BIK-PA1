#include <stdio.h>

/*long long int * cuckoo*/
int cuckooClock (int y1, int m1, int d1, int h1, int i1,
                 int y2, int m2, int d2, int h2, int i2){
                 long int celek1 = (y1)*15768000 + (m1)*43200 + (d1)*1440 + (h1)*60 + (i1);
                 long int celek2 = (y2)*15768000 + (m2)*43200 + (d2)*1440 + (h2)*60 + (i2);
                 printf("Celek 1: %ld\nCelek 2: %ld\n", celek1, celek2);
                 return 1;
                 }

int main (void){

    //long long int cuckoo;
    cuckooClock (1,1,1,1,1,2,2,2,2,2);
    return 0;
}