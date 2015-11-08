//https://www.hackerrank.com/challenges/diagonal-difference
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int mSize = 0;
    scanf("%d", &mSize);

    int row = 0;
    int col = 0;
    int num = 0;
    int leftSum = 0;
    int rightSum = 0;
    int currColm = mSize - 1;

    // iterate over the input and calculate the 
    // values for the diagonals in the matrix
    for (row; row < mSize; row++){
        for(col = 0; col < mSize; col++) {
            scanf("%d", &num);
            if (row == col) {
                leftSum += num;
            }
            if (col == currColm) {
                rightSum += num;
                currColm--;
            }
        }
    }

    printf("%d\n", abs(leftSum - rightSum));
    return 0;
}
