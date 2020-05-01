#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;
const ll MOD=10e9+7;
int main()
{
    IOS
    ll n,ans=0,mini,maxi;
    cin>>n;
    map<ll,ll> m;
    while(n--)
    {
        ll b,d;
        cin>>b>>d;
        m[b]++;
        m[d+1]--;
        mini=min(mini,b);
        maxi=max(maxi,d);
    }
    ll tot=0;
    for(ll i=mini;i<=maxi;i++)
    {
        tot += m[i];
        ans += tot%MOD;
        ans = ans%MOD;
    }
    cout<<ans;
    return 0;
}