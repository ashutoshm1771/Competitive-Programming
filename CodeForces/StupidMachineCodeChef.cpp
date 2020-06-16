#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n , x , ans;
        cin>>n>>x;
        ans = x;
        for(ll j = 1 ; j < n ; j++){
            ll q;
            cin>>q;
            x = min(q , x);
            ans += x;
        }
        cout<<ans<<endl;
    }
} 