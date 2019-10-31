#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin>>n;
    map<string, int> m;
    int a[2];
    std::string ch;
    while(n--)
    {
        cin>>a[0];
        if(a[0]==1)
        {
            cin>>ch>>a[1];
            auto it=m.find(ch);
            if(it==m.end())
            m.insert(pair<string,int>(ch,a[1]));
            else
            m[ch]+=a[1];
        }
        else if(a[0]==2)
        {
            cin>>ch;
            m.erase(ch);
        }
        else
        {
            cin>>ch;
            map<string,int>::iterator it=m.find(ch);
            if(it!=m.end())
            cout<<it->second<<endl;
            else
            cout<<"0"<<endl;
        }
        //for(map<string,int>::iterator it=m.begin();it!=m.end();++it)
       // cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}

