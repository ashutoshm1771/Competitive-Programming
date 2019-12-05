#include<bits/stdc++.h>
using namespace std;

int totSum(int x,int n,int num)
{
    if(pow(num,n)<x)
    return totSum(x,n,num+1)+totSum(x-pow(num,n),n,num+1);
    else if(pow(num,n)==x)
    return 1;
    else
    return 0;
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<totSum(x,n,1);
    return 0;
}
