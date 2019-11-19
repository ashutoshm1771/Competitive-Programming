#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=sizeof(a)/sizeof(a[0]);
    sort(a,a+k);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        c++;
    }
    cout<<c+1;
}
