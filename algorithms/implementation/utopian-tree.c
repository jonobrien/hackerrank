//https://www.hackerrank.com/challenges/utopian-tree
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int uTree(int n) {
  int i = 1;
  int height = 1;

  for(i; i <= n; i++) {
    if (i&1) {
      height = height << 1;
    }
    else {
      height += 1;
    }
  }
  return height;
}


int main() {
  int T;
  scanf("%d",&T);
  int N;
  int i = 0;
  for(i; i < T; i++) {
    scanf("%d",&N);
    printf("%d\n", uTree(N));
  }
  return 0;
}
