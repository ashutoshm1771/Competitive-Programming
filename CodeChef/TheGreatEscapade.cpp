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
typedef long long int ll;

void solve()
{
    int n;
    cin>>n;
    vi v(n);
    fo(i,n)cin>>v[i];
    int k; cin>>k;
    vi a;
    fo1(i,n-k,n-1)a.pb(v[i]);
    fo2(i,0,k)a.pb(v[i]);
    int ans=0,t;
    fo1(i,0,a.size()-k)
    {
        t=0;
        fo2(j,i,i+k) t += a[j];
        ans=max(ans,t); 
    }
    cout<<ans;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
