// Author : Ashutosh Mishra

#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string al="abcdefghijklmnopqrstuvwxyz";
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int c=0;
        map<char,int> m;
        for(int i=0;a[i];i++)
        {
            m[a[i]]++;
            
        }
        for(int i=0;b[i];i++)
        {
            m[b[i]]--;
            
        }
        for(int i=0;al[i];i++)
        {
            if(m[al[i]]<0)c-=m[al[i]];
            else c+=m[al[i]];
        }
        cout<<c<<endl;
    }
    return 0;
}
