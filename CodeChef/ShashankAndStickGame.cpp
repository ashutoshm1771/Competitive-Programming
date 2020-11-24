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
typedef long long int ll;

void solve()
{
    int n,f,se,ans=0;
    cin>>n;
    map<int,int> m;
    set<int> s;
    fo(i,n)
    {
        cin>>f>>se;
        m[f]=se;
        s.insert(f);
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(s.find(it->first-it->second)==s.end()){
            s.insert(it->first-it->second);
            ans++;
        }
        else if(s.find(it->first+it->second)==s.end())
        {
            s.insert(it->first+it->second);
            ans++;
        }
    }
    cout<<ans<<endl;
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
