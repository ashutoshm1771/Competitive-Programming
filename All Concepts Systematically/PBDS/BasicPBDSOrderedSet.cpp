// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
int main()
{
    int n;
    ordered_set oset;
    cin>>n;
    while(n!=-1)
    {
        oset.insert(n);
        cin>>n;
    }
    for(auto x: oset)
        cout<<x<<" ";
    cout<<*(oset.find_by_order(0))<<endl; // Smallest element
    cout<<*(oset.find_by_order(1))<<endl; // Second smallest element
    cout<<*(oset.find_by_order(3))<<endl; //(3+1=4)th smallest element
    cout<<oset.order_of_key(1)<<endl; // Number of elements strictly smaller than 1
    cout<<oset.order_of_key(3)<<endl; // Number of elements strictly smaller than 3
    cout<<oset.order_of_key(4)-oset.order_of_key(2)<<endl; // Number of elements between 3 and 2 inclusive 2 <= x < 4
    if(oset.find(2)!=oset.end())
        oset.erase(oset.find(2));
    for(auto x: oset)
        cout<<x<<" ";
    return 0;
}
