// Author : Ashutosh Mishra

#include <bits/stdc++.h>
using namespace std;


int main() {
     int i,j,c=0,x,k,n;
     cin>>n>>k;
     int ar[n];
     for(i=0;i<n;i++)
     cin>>ar[i];
     sort(ar,ar+n);
     i=0;
     while(i<n)
     {
         j=i+1;
         while((ar[i]+k>=ar[j])&&(j<n))
         {
             j+=1;
         }
         x=j;
         j-=1;
         while(ar[j]+k>=ar[x]&&(x<n))
         {
             x++;
         }
         c++;
         i=x;
     }
    cout<<c;
    return 0;
}
