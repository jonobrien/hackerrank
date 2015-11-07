//https://www.hackerrank.com/challenges/a-very-big-sum
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//adding large integers together
int main()
{
    long long int big_sum = 0, num;
    int input_size = 0;
    scanf("%d", &input_size);
    int i = 0;
    for(i; i < input_size; i++) {
        scanf("%lld", &num);
        big_sum += num;
    }
    printf("%lld", big_sum);
    return 0;
}
