// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    IOS
    int n;
    cin>>n;
    ll ip;
    map<ll,ll> m;
    unordered_set<ll> s;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        m[ip]++;
        if(s.find(ip)==s.end()){
            s.insert(ip);
            v.push_back(ip);
        }
    }
    for(auto x: v)
    {
        cout<<x+m[x]<<" ";
    }
    return 0;
}
