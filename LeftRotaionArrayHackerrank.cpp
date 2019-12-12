#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,ip;
    cin>>n>>r;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        v[(i+n-r)%n]=ip;
    }
    for(int x: v)
        cout<<x<<" ";
    return 0;
}
