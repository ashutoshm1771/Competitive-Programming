// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
#include<map>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;
vector<int> v;
int main()
{
    IOS
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        v.resize(n);
        map<int,int> m,prev;
        for(int i=0;i<n;i++){
            cin>>v[i];
            prev[v[i]]=-2;
        }
        for(int i=0;i<n;i++)
        {
            if(prev[v[i]]!=(i-1))
            {
                m[v[i]]++;
                prev[v[i]]=i;
            }
        }
        int count=0,type=INT_MAX;
        for(auto i=m.begin();i!=m.end();++i)
        {
            //cout<<i->first<<" "<<i->second<<endl;
            if(m[i->first]>count)
            {
                type=i->first; count=m[i->first];
            }
        }
        cout<<type<<endl;
    }
    return 0;
}
