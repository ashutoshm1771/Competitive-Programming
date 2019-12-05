#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int l[n],a,b,min;
    vector<int> v;
    for(int i=0;i<n;i++)
    cin>>l[i];
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        min=l[a];
        for(int j=a+1;j<=b;j++)
        if(min>l[j])min=l[j];
        //min=*std::min_element(l+a-1,l+b);
        v.push_back(min);
    }
    for(int x: v)
    cout<<x<<endl;
}

