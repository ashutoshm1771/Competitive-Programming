// Author : Ashutosh Mishra

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    set<int> sa,sb;
    map<int,int> ma,mi,mb;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        
        if(a<b){
            sa.insert(a);
            ma[a]=b;
            mi[a]=i+1;
        }
        else{
            sb.insert(b);
            mb[b]=a;
            mi[b]=i+1;
        }
    }
    vector<int> ans;
    if(sa.size()>sb.size())
    {
        //cout<<"Hello World a"<<endl;
        cout<<sa.size()<<endl;
        for(int i=0;i<sa.size();i++)
        {
            cout<<(mi[sa[i]])<<" ";
        }
    }
    else
    {
        //cout<<"Hello World b"<<endl;
        cout<<sb.size()<<endl;
        for(set<int>::iterator it=sb.begin();it!=sb.end();it++)
        {
            cout<<mi[*it]<<" ";
        }
    }
    return 0;
}
