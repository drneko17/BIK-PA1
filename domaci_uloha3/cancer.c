#ifndef __PROGTEST__
#include <stdio.h>
#include <assert.h>
#endif /* __PROGTEST__ */


int cuckooClock ( int y1, int m1, int d1, int h1, int i1,
                  int y2, int m2, int d2, int h2, int i2, long long int * cuckoo )
{

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

                  if (d1 > 31 || d2 > 31){
                    return 0;
                  }
                  if (d1 == 29 && m1 == 2){
                      if ((y1 % 400 == 0 && y1 % 4000 != 0) || (y1 % 4 == 0 && y1 % 100 != 0)){
                          return 1;
                        }else {
                          return 0;
                          }
                  }
                                    if (d2 == 29 && m2 == 2){
                      if ((y2 % 400 == 0 && y2 % 4000 != 0) || (y2 % 4 == 0 && y2 % 100 != 0)){
                          return 1;
                        }else {
                          return 0;
                          }
                  }

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
                 /*if (m1 == 1 && m2 == 10){
                   fullDayCount -= 1;
                 }*/
                 if (m2 > m1){
                   fullDayCount -=1;
                 }

                 int leapYears = countLeapYears(y1, y2);
                 int bigMonths = (countBigMonths(y1,m1,y2,m2)-1);
                 if (bigMonths < 0){
                   fullDayCount = fullDayCount + leapYears;
                 }else{
                 fullDayCount = fullDayCount + leapYears + bigMonths;
                 }
                 if (m1 < 3 && m2 > 2){
                   fullDayCount -= 2;
                 }
                 if (y1 < y2){
                   fullDayCount = fullDayCount - (y2-y1);
                 }
                 int firstDayCuckoo = 0;
                 int lastDayCuckoo = 0;
                // if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12){
                 //  fullDayCount -= 1;
                // }
                 if (i1 < 30 && (celek2-celek1)>(i2-i1)){
                    firstDayCuckoo += 1;
                 }
                 if (y1 == y2 && m1 == m2 && d1 == d2){
                 //  fullDayCount = 0;
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
                 if (h1 == 0 && i1 == 0){
                   firstDayCuckoo += 12;
                 }
                 *cuckoo = firstDayCuckoo + lastDayCuckoo + (fullDayCount * 180);

                 printf("fullDayCount: %d\n", fullDayCount);
                 printf("leapYears: %d\nbigMonths: %d\n", leapYears,bigMonths);
                 printf("cuckoo: %lld\n", *cuckoo);
                 return 1;
}

#ifndef __PROGTEST__
int main ( int argc, char * argv [] )
{
  long long int cuckoo;

  assert ( cuckooClock ( 2013, 10,  1, 13, 15,
                         2013, 10,  1, 18, 45, &cuckoo ) == 1 && cuckoo == 26 );
  assert ( cuckooClock ( 2013, 10,  1, 13, 15,
                         2013, 10,  2, 11, 20, &cuckoo ) == 1 && cuckoo == 165 );
  assert ( cuckooClock ( 2013,  1,  1, 13, 15,
                         2013, 10,  5, 11, 20, &cuckoo ) == 1 && cuckoo == 49845 );
  assert ( cuckooClock ( 2012,  1,  1, 13, 15,
                         2012, 10,  5, 11, 20, &cuckoo ) == 1 && cuckoo == 50025 );
  assert ( cuckooClock ( 1900,  1,  1, 13, 15,
                         1900, 10,  5, 11, 20, &cuckoo ) == 1 && cuckoo == 49845 );
  assert ( cuckooClock ( 2013, 10,  1,  0,  0,
                         2013, 10,  1, 12,  0, &cuckoo ) == 1 && cuckoo == 102 );
  assert ( cuckooClock ( 2013, 10,  1,  0, 15,
                         2013, 10,  1,  0, 25, &cuckoo ) == 1 && cuckoo == 0 );
  assert ( cuckooClock ( 2013, 10,  1, 12,  0,
                         2013, 10,  1, 12,  0, &cuckoo ) == 1 && cuckoo == 12 );
  assert ( cuckooClock ( 2013, 11,  1, 12,  0,
                         2013, 10,  1, 12,  0, &cuckoo ) == 0 );
  assert ( cuckooClock ( 2013, 10, 32, 12,  0,
                         2013, 11, 10, 12,  0, &cuckoo ) == 0 );
  assert ( cuckooClock ( 2100,  2, 29, 12,  0,
                         2100,  2, 29, 12,  0, &cuckoo ) == 0 );
  assert ( cuckooClock ( 2400,  2, 29, 12,  0,
                         2400,  2, 29, 12,  0, &cuckoo ) == 1 && cuckoo == 12 );
  return 0;
}
#endif /* __PROGTEST__ */
