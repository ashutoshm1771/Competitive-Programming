// Author : Ashutosh Mishra

#include<bits/stdc++.h>
/* //--
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> // oset.order_of_key(a); --> # of e < a
using namespace __gnu_pbds;   // *(oset.find_by_order(a)); --> (a-1)th smallest e  
#define orderedSet tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
//-- */  
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define pb push_back 
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,a,b) for(int i=a;i<=b;i++)
#define fo2(i,a,b) for(int i=a;i<b;i++)
#define fo3(i,s) for(int i=0;s[i];i++)
#define fo4(x,s) for(auto x: s)
#define all(v) v.begin(),v.end();
using namespace std;
typedef unsigned long long int ll;
/*

    18 --> 4 8 12 16
    16 8 4 2 1 --> 10010 --> 100 1000 1100 10000
*/

void solve()
{  
    ll t;
    cin>>t;
    if(t&1){
        cout<<t/2<<endl;
        return;
    }
    if(t&&(!(t&(t-1)))){
        cout<<0<<endl;
        return;
    }
    bitset<128> b(t);
    int first=0;
    while(b[first]!=1)first++;
    int last=(int)log2(t),mid=last-first-1;
    ll ans=0;
    fo2(i,0,mid)
        ans += pow(2,i);
    string s="";
    for(int i=last-1;i>first;i--){
        s += (b.test(i)) ? '1' : '0';
    }
    bitset<64> b2(s);
    ll diff=pow(2,mid)-1-b2.to_ullong();
    ans += pow(2,mid)-diff;
    cout<<ans<<endl;
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
