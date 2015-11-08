//https://www.hackerrank.com/challenges/staircase
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int nHeight = 0;
    scanf("%d",&nHeight);
    int i = 0;
    int j = 0;
    int k = 0;
    
    for (i; i < nHeight; i++) {
        for (j = i; j < nHeight - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
