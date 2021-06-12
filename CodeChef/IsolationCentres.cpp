// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;

int main()
{
    IOS
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        ll n,q,is,c;
        cin>>n>>q;
        cin>>s;
        map<char,ll> m;
        for(auto x: s)
            m[x]++;
        for(ll j=0;j<q;j++){
            cin>>is;
            c=0;
            for(auto it=m.begin();it!=m.end();++it)
            {
                if(it->second - is > 0) c += it->second-is;
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
