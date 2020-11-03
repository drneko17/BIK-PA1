#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

    int team1a = 0;
    int team1b = 0;
    int team1c = 0;
    int team2a = 0;
    int team2b = 0;    
    int team2c = 0;
    int team1d = 0;
    int team1e = 0;
    int team2d = 0;
    int team2e = 0; 
    int a1, b1, c1, d1, e1, a2, b2, c2, d2, e2;
    int minus;

    char t1[12] = "";
    char t2[12] = "";

    scanf("%s %s", &t1, &t2);
    srand(time(NULL));
    while (team1a < 16 || team2a < 16){
        a1 = rand() % 5 + 1;
        a2 = rand() % 5 + 1;
        team1a += a1;
        team2a += a2;
    }
    if (team1a > team2a){
        minus = team1a - 16;
        team1a -= minus;
        team2a -= minus;
    } else {
        minus = team2a - 16;
        team1a -= minus;
        team2a -= minus;
    }
    while (team1b < 16 || team2b < 16){
        b1 = rand() % 5 + 1;
        b2 = rand() % 5 + 1;
        team1b += b1;
        team2b += b2;
    }
    if (team1b > team2b){
        minus = team1b - 16;
        team1b -= minus;
        team2b -= minus;
    } else {
        minus = team2b - 16;
        team1b -= minus;
        team2b -= minus;
    }
    while (team1c < 16 || team2c < 16){
        c1 = rand() % 5 + 1;
        c2 = rand() % 5 + 1;
        team1c += c1;
        team2c += c2;
    }
    if (team1c > team2c){
        minus = team1c - 16;
        team1c -= minus;
        team2c -= minus;
    } else {
        minus = team2c - 16;
        team1c -= minus;
        team2c -= minus;
    }
    while (team1d < 16 || team2d < 16){
        d1 = rand() % 5 + 1;
        d2 = rand() % 5 + 1;
        team1d += d1;
        team2d += d2;
    }
    if (team1d > team2d){
        minus = team1d - 16;
        team1d -= minus;
        team2d -= minus;
    } else {
        minus = team2d - 16;
        team1d -= minus;
        team2d -= minus;
    }
    while (team1e < 16 || team2e < 16){
        e1 = rand() % 5 + 1;
        e2 = rand() % 5 + 1;
        team1e += e1;
        team2e += e2;
    }
    if (team1e > team2e){
        minus = team1e - 16;
        team1e -= minus;
        team2e -= minus;
    } else {
        minus = team2e - 16;
        team1e -= minus;
        team2e -= minus;
    }

    printf("%s: %d | %d | %d | %d | %d\n%s: %d | %d | %d | %d | %d\n", t1, team1a, team1b, team1c, team1d, team1e, t2, team2a, team2b, team2c, team2d, team2e);
    return 0;

}