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
    int n,m;
    cin>>n>>m;
    vector<vector<int> > v(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j];
    int minR=0,minC=0;
    // fo(i,n){
    //     fo(j,m)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<m;j++)
            if(v[i][j])break;
        if(j==m)minR++;
    }
    for(int i=0;i<m;i++)
    {
        int j=0;
        for(j=0;j<n;j++)
            if(v[j][i])break;
        if(j==n)minC++;
    }
    //cout<<endl<<minR<<" "<<minC<<endl;
    if(min(minR,minC)&1)cout<<"Ashish"<<endl;
    else cout<<"Vivek"<<endl;
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
