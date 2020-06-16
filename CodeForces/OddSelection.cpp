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
string subSolve(vector<int> v,int x)
{
    unordered_map<bool,int> m;
    fo4(x, v)
    {
        if(x&1)m[0]++;
        else m[1]++;
    }
    if(x>=m[0])
    {
        if(m[0]&1) return "Yes";
        else{
            if(m[1]+m[0]-1 >= x)return "Yes";
            else return "No";
        }
    }
    else
    {
        if(x&1)return "Yes";
        else{
            if(m[1]>=1)return "Yes";
            else return "No";
        }
    }
}
void solve()
{
    int n,x;
    cin>>n>>x;
    vi v(n);
    fo(i,n)
        cin>>v[i];
    cout<<subSolve(v,x)<<endl;
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
