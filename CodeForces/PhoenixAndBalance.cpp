#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin>>n;
    ll c=0;
    ll a=0,b=0,co=0;
    for(ll i=1;i<(n/2);i++)
        a += pow(2,i);
    a += pow(2,n);
    for(ll i=n/2;i<n;i++)
        b += pow(2,i);
    cout<<abs(a-b)<<endl;
}
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}