// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> vn,vm;
int main()
{
    ll n,m,N=0,M=0;
    cin>>n>>m;
    vn.clear();
    vm.clear();
    vn.resize(n);
    vm.resize(m);
    for(ll i=0;i<n;i++){
        cin>>vn[i];
        if(vn[N]<vn[i])N=i;
    }
    for(ll i=0;i<m;i++){
        cin>>vm[i];
        if(vm[M]>vm[i])M=i;
    }
    for(int j=0;j<m;j++)
        cout<<N<<" "<<j<<endl;
    for(int j=0;j<n;j++)
        if(j!=N)
            cout<<j<<" "<<M<<endl;
    return 0;
}
