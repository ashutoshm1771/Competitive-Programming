//Ashutosh Mishra
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i,j,ma=0,mo=0,mx=0,a,b,c;
  for(i=1;i<n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
            a=i&j;
            if(a>ma && a<k)ma=a;
            b=i|j;
            if(b>mo && b<k)mo=b;
            c=i^j;
            if(c>mx && c<k)mx=c;
      }
  }
  printf("%d\n%d\n%d",ma,mo,mx);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

