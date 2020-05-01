// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,ip;
        cin>>n>>r;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>ip;
            v.push_back(ip);
        }
        sort(v.begin(),v.end());
        if(r-v[0]<0)
        cout<<"0"<<endl;
        else
        cout<<r-v[0]<<endl;
    }
}
