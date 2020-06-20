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
#define vll vector<long long int>
#define pb push_back 
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,a,b) for(int i=a;i<=b;i++)
#define fo2(i,a,b) for(int i=a;i<b;i++)
#define fo3(i,s) for(int i=0;s[i];i++)
#define fo4(x,s) for(auto x: s)
#define all(v) v.begin(),v.end();
using namespace std;
typedef long long int ll;
vi v;
int minNum()
{
    int o=0,e=0,n=v.size();
    fo(i,n)
    {
        if(v[i]&1 && i%2==0)e++;
        else if(v[i]%2==0 && i&1)o++;
    }
    if(o==e)return o;
    else return -1;
}
void solve()
{
    int n;
    cin>>n;
    v.clear();
    v.resize(n);
    fo(i,n)cin>>v[i];
    cout<<minNum()<<endl;   
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
