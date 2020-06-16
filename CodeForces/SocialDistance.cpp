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
void process(vector<bool>& v,int i,int k)
{
    int n=v.size(); 
    v[i]=1;
    if(i!=n-1){
        for(int j=i+1;j<=i+k && j<n;j++)
            v[j]=1;
    }
    if(i)
    {
        for(int j=i-1;j>=i-k && j>=0;j--)
            v[j]=1;
    }
}
void solve()
{
    int n,k,ans=0;
    cin>>n>>k;
    string s; cin>>s;
    vector<bool> v(n,0);
    fo(i,n)
    {
        if(s[i]=='1')
        {
            process(v,i,k);
            // if(i!=n-1){
            //     for(int j=i+1;j<=i+k && j<n;j++)
            //         v[j]=1;
            // }
            // if(i)
            // {
            //     for(int j=i-1;j>=i-k && j>=0;j--)
            //         v[j]=1;
            // }
        }
    }
    //fo4(x,v)cout<<x<<" ";
    fo(i,n)
    {
        if(!v[i])
        {
            process(v,i,k);
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
