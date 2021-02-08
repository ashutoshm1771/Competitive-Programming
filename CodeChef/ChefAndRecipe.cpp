// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

bool check(vector<int> v)
{
    int n=v.size(),i=0;
    map<int,bool> m;
    map<int,int> f;
    set<int> s;
    while(i<n)
    {
        if(m[v[i]]){ return false; }
        else{
            m[v[i]]=true; 
            f[v[i]]=1;
            while(v[i]==v[i+1])
            {
                f[v[i]]++;
                i++;
                if(i==n)return true;
            }
            if(s.find(f[v[i]])!=s.end()){ return false;}
            else 
            s.insert(f[v[i]]);
            i++;
        }
    }
    return true;
}

int main()
{
    IOS 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(check(v))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
