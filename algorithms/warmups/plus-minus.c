//https://www.hackerrank.com/challenges/plus-minus
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int nNums = 0;
    scanf("%d", &nNums);

    int i = 0;
    int num = 0;
    int negCount = 0;
    int posCount = 0;
    int zeroCount = 0;
    
    for(i; i < nNums; i++) {
        scanf("%d", &num);
        if (num < 0) {
            negCount += 1;
        } else if (num == 0) {
            zeroCount += 1;
        } else {
            posCount += 1;
        }
    }

    printf("%.3f\n", ((float)posCount) / nNums);
    printf("%.3f\n", ((float)negCount) / nNums);
    printf("%.3f\n", ((float)zeroCount) / nNums);

    return 0;
}
