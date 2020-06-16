#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;

void solve()
{
    ll n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    ll sl=a-b,su=a+b,pu=c+d,pl=c-d;
    if( sl*n >= pl && sl*n <= pu)
        cout<<"Yes"<<endl;
    else if( sl*n > pu )
        cout<<"No"<<endl;
    else if( sl*n < pl )
    {
        if( su*n >= pl )
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
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