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
void solve()
{
    int n;
    cin>>n;
    vi v(n);
    fo(i,n)cin>>v[i];
    vi typ(n);
    fo(i,n)cin>>typ[i];
    vi sorted(v.begin(),v.end());
    sort(sorted.begin(),sorted.end());
    // fo4(x,sorted)cout<<x<<" ";
    // cout<<endl;
    // fo4(x,typ)cout<<x<<" ";
    // cout<<endl;
    multimap<int,int> actualPos;
    fo(i,n)
        actualPos.insert(make_pair([v[i]],i));
    bool fl=true,ffl=false;
    fo(i,n)
    {
        if(actualPos[sorted[i]]!=i)
        {
            fl=false;
            if(typ[i]==typ[actualPos[sorted[i]]])
            {
                //cout<<sorted[i]<<" "<<v[i]<<" "<<typ[i]<<" "<<typ[actualPos[sorted[i]]]<<endl;
                ffl=true; //NO
                break;
            }
            else{ 
                swap(typ[actualPos[sorted[i]]],typ[i]);
                actualPos[v[i]]=actualPos[sorted[i]];
            }
        }
    }
    if(fl){
        cout<<"Yes"<<endl;
        return;
    }
    if(ffl)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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
