// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
#define ordered_set tree<long long int,null_type,less<long long int>,rb_tree_tag,tree_order_statistics_node_update>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
using namespace __gnu_pbds;
typedef long long int ll;
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c=0,prev,m,j;
        cin>>n;
        prev=n;
        vector<ll> v(n);
        ordered_set oset;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(oset.find(v[i])==oset.end())
            oset.insert(v[i]);
        }

        for(ll i=0;i<oset.size();i++)
        {
            m=*(oset.find_by_order(i));
            j=0;
            while(v[j]!=m)j++;
            if(j<prev)c++;
            prev=j;
        }
        cout<<c<<endl;
    }
    return 0;
}
