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

int minNum(string s)
{
    int i=0,ans=0;
    bool fl=false;
    // while(i<s.size())
    // {
    //     while(s[i]==s[i+1]){
    //         i++;
    //         ans++;
    //         if(i==s.size()){
    //             fl=true;
    //             break;
    //         }
    //     }
    //     if(fl)break;
    //     i++;
    // }
    for(int i=0;s[i];i++)
    {
        if(s[i]==s[i+1])ans++;
    }
    return ans;
}

void solve()
{
    int n; cin>>n;
    string s;
    cin>>s;
    cout<<minNum(s)<<endl;
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
