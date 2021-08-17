// Author : Ashutosh Mishra

#include<bits/stdc++.h>

/* //--
Policy based data structures
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

vi h;
int getP(int p,int l,int st,int n)
{
    if(st==n)return p;
    int i; bool fl=false; 
    for(i=st;i<n;i++)
    {
        if(l>=h[i]){
            l -= h[i];
            p++;
        }
        else {
            fl=true;
            break;
        }
    }
    if(fl && p>=1){ p = max( p , getP(p-1,l+h[i],i+1,n)); }
    return p;
}
void solve()
{
    int n;
    cin>>n;
    h.clear();
    h.resize(n);
    fo(i,n)cin>>h[i];
    int l; cin>>l;
    cout<<getP(0,l,0,n);
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
