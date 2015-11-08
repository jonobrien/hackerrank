//https://www.hackerrank.com/challenges/time-conversion
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


 int main() {
    int hrs = 0;
    int mins = 0;
    int secs = 0;
    char pm[] = "PM";
    char am[] = "AM";
    char mm[3];
    scanf("%02d:%02d:%02d%s", &hrs, &mins, &secs, mm);

    if (strcmp(mm, am) == 0) {
        if (hrs == 12) {
            printf("%02d:%02d:%02d", hrs - hrs, mins, secs);
        } else {
            printf("%02d:%02d:%02d", (hrs + 24) % 24, mins, secs);
        }
    } else if (strcmp(mm, pm) == 0) {
        if (hrs == 12) {
            printf("%02d:%02d:%02d", hrs, mins, secs);
        } else {
            printf("%02d:%02d:%02d", hrs + 12, mins, secs);
        }
    }
    return 0;
 }
