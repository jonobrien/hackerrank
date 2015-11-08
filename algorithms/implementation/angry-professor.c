//https://www.hackerrank.com/challenges/angry-professor
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
   int nCases = 0;
   scanf("%d\n", &nCases);
   int nStud = 0;
   int min = 0;
   int nPresent = 0;
   int time = 0;
    
   for (int i = 0; i < nCases; i++){
      nPresent = 0;
      scanf("%d %d", &nStud, &min);
      for (int j = 0; j < nStud; j++){
         scanf("%d ", &time);
         if(time <= 0){
            nPresent++;
         }
      }
      if (nPresent >= min){
        printf("NO\n");
     }
     else{
        printf("YES\n");
     }
   }
   return 0;
}
