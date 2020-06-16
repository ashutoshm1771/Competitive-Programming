#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int s=0,i,x; bool fl=false;
    for(int i=0;i<n;i++)
    {
        if(fl){ x=i; break; }
        if(a[i]>=b[n-i-1])s+=a[i];
        else{
            k--;
            s+=b[n-i-1];
            if(k==0)fl=true;
        }
    }
    if(fl)
    {
        for(int i=x;i<n;i++)
            s+=a[i];
    }
    cout<<s<<endl;
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