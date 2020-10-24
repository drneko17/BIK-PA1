#include <stdio.h>

int main (void){

    int h1, m1, s1, ms1;
    int h2, m2, s2, ms2;
    int h3, m3, s3, ms3;
    int t1, t2;
    printf("Zadejte cas t1:\n");
    scanf(" %d : %d : %d , %d",&h1, &m1, &s1, &ms1);
    if (h1 > 23 || m1 > 59 || s1 > 59 || ms1 > 999 || h1 < 0 || m1 < 0 || s1 < 0 || ms1 < 0){
        printf("Nespravny vstup.\n");
        return 1;
    }

    printf("Zadejte cas t2:\n");
    scanf(" %d : %d : %d , %d",&h2, &m2, &s2, &ms2);
    if (h2 > 23 || m2 > 59 || s2 > 59 || ms2 > 999 || h2 < 0 || m2 < 0 || s2 < 0 || ms2 < 0){
        printf("Nespravny vstup.\n");
        return 1;
    }
    t1 = ms1 + s1*1000 + m1*60000 + h1*3600000;
    t2 = ms2 + s2*1000 + m2*60000 + h2*3600000;
    if (t1>t2){
        printf("Nespravny vstup.\n");
        return 1;
    }
    if (ms1 > ms2){
        ms3 = 1000 + (ms2-ms1);
        s2 -= 1;
    }
    if (ms1 <= ms2){
        ms3 = ms2-ms1;
    }
    if (s1 > s2){
        s3 = 60 + (s2-s1);
        m2 -= 1;
    }
    if (s1 <= s2){
        s3 = s2-s1;
    }
    if (m1 > m2){
        m3 = 60 + (m2-m1);
        h2 -= 1;
    }
    if (m1 <= m2){
        m3 = m2-m1;
    }
    h3 = h2 - h1;
    printf("Doba:%3d:%02d:%02d,%03d\n", h3, m3, s3, ms3);
    return 0;
}