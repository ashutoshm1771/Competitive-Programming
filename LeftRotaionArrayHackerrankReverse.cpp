#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,ip;
    cin>>n>>r;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        v.push_back(ip);
    }
    reverse(v.begin(),v.begin()+(r%n));
    reverse(v.begin()+(r%n),v.end());
    reverse(v.begin(),v.end());
    for(int x: v)
        cout<<x<<" ";
    return 0;
}
