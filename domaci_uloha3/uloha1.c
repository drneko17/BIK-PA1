#include <stdio.h>

/*long long int * cuckoo*/
int countLeapYears (int a, int b){
    int diff = b-a;
    int count = 0;
    for (int i = 0; i <= diff ; i++){
        if ((a % 400 == 0 && a % 4000 != 0) || (a % 4 == 0 && a % 100 != 0)){
            count += 1;
        }
        a += 1;
    }
    return count;
}
int countBigMonths (int y1, int m1, int y2, int m2){
    int monthDiff = (y2-y1)*12+m2-m1;
    int count = 0;
    int k = 0;
    if (m1 == m2){
        return 0;
    }
    for (int i = 0; i <= monthDiff; i++){
        if (m1 == 1 || m1 == 3 || m1 == 5|| m1 == 7 || m1 == 8 || m1 == 10 || m1 ==12){
            count += 1;
        }
        else if (m1 > 12){
            k = m1%12;
            if (k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12){
                count += 1;
            }
        }
        m1 += 1;
    }
    printf("monthDiff: %d\n", monthDiff);
    return count;
}

int cuckooClock (int y1, int m1, int d1, int h1, int i1,
                 int y2, int m2, int d2, int h2, int i2, long long int * cuckoo){

                 long int celek1 = (y1)*15768000 + (m1)*43200 + (d1)*1440 + (h1)*60 + (i1);
                 long int celek2 = (y2)*15768000 + (m2)*43200 + (d2)*1440 + (h2)*60 + (i2);
                 if(celek1>celek2){
                     printf("Nespravny vstup.\n");
                     return 0;
                 }
                 int fullDayCount = ((y2-y1)*365+m2*30+d2)-(m1*30+d1);
                 if (d2-d1 < 2){
                     fullDayCount = 0;
                 }
                 int leapYears = countLeapYears(y1, y2);
                 int bigMonths = countBigMonths(y1,m1,y2,m2);
                 fullDayCount = fullDayCount + leapYears + bigMonths;
                 int firstDayCuckoo = 0;
                 int lastDayCuckoo = 0;
                 if (i1 < 30){
                    firstDayCuckoo += 1;
                 }
                 if (y1 == y2 && m1 == m2 && d1 == d2){

                     for (int i = h1+1; i < h2; i++){
                         if (i > 12){
                             firstDayCuckoo += i-11;
                         }
                         else{
                             firstDayCuckoo += i+1;
                         }
                     }
                     if (h2 > 12){
                         firstDayCuckoo += h2-12;
                     }else{
                         firstDayCuckoo += h2;
                     }
                     if (i2 > 30){
                         firstDayCuckoo += 1;
                     }
                 }else{
                 for (int i = h1+1; i <= 24; i++){
                     if (i > 12){
                         firstDayCuckoo += i-11;
                     }
                     else{
                        firstDayCuckoo += i+1;
                     }
                 }


                 if (i2 < 30){
                     lastDayCuckoo -= 1;
                 }
                 if (h2 == 0 && i2 > 30){
                     lastDayCuckoo += 1;
                 }
                 for (int i = h2; i > 0; i--){
                     if (i > 12){
                         lastDayCuckoo += i-11;
                     }
                     else{
                         lastDayCuckoo += i+1;
                     }
                 }
                 }
                 *cuckoo = firstDayCuckoo + lastDayCuckoo + (fullDayCount * 180);

                 printf("Celek 1: %ld\nCelek 2: %ld\nfullDayCount: %d\n", celek1, celek2, fullDayCount);
                 printf("leapYears: %d\nbigMonths: %d\n", leapYears,bigMonths);
                 printf("cuckoo: %lld\n", *cuckoo);
                 return 1;
                 }

int main (void){

    long long int cuckoo;
    cuckooClock (2013, 10,  1, 13, 15,2013, 10,  1, 18, 45, &cuckoo);
    return 0;
}