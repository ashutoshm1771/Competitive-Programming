// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
int countInv(vector<int> v)
{
    int ic=0,key;
    ordered_set oset;
    oset.insert(v[0]);
    for(int i=1;i<v.size();i++){
        oset.insert(v[i]);
        key=oset.order_of_key(v[i]+1);
        ic += oset.size()-key;
    }
    return ic;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<countInv(v)<<endl;
    return 0;
}
