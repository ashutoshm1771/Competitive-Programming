// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio; cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    IOS
    int n,ip,j;
    vector<int> v,s,res;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        v.push_back(ip);
    }
    int ns;
    cin>>ns;
    for(int i=0;i<ns;i++)
    {
        cin>>ip;
        s.push_back(ip);
    }
    map<int,int> m;
    m[v[0]]=1;
    for(int i=1;i<n;i++)
    if(v[i-1]==v[i]) m[v[i]]=m[v[i-1]];
    else m[v[i]]=m[v[i-1]]+1;
    j=n-1;
    for(int i=0;i<ns;i++)
    {
        while(v[j]<s[i] && j>=0) j--;
        if(v[j]==s[i]) res.push_back(m[v[j]]);
        else res.push_back(m[v[j]]+1);
    }
    for(int x: res) cout<<x<<endl;
}

