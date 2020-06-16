#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<bool> peaks(n);
    peaks[0]=peaks[n-1]=false;
    for(ll i=1;i<n-1;i++)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])peaks[i]=true;
        else peaks[i]=false;
    }
    //for(auto x: peaks) cout<<x<<" ";
    //cout<<endl;
    int maxPeak=0,tempMax=0,finalLeft=0;
    for(ll i=0;i<=n-k;i++)
    {
        tempMax=0;
        for(ll l=i+1;l<i+k-1;l++)
        {
            if(peaks[l])tempMax++;
        }
        if(maxPeak<tempMax){
            maxPeak=tempMax;
            //cout<<maxPeak<<" ";
            finalLeft=i;
        }
    }
    cout<<maxPeak+1<<" "<<finalLeft+1<<endl;
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