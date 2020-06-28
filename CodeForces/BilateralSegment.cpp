// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
typedef long long int ll;
vector<int> v;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,ip,c=0;
        cin>>n;
        v.clear();
        v.resize(n);
        unordered_set<int> s;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cin>>m;
        for(ll i=0;i<m;i++)
        {
            cin>>ip;
            s.insert(ip);
        }
        ll i=0;
        while(i<n)
        {
            if(s.find(v[i])!=s.end())
            {
                while(s.find(v[i])!=s.end())
                {
                    i++;
                    if(i==n){
                        break;
                    }
                }
                c++;
            }
            else i++;
        }
        cout<<c<<endl;
    }
    return 0;
}
