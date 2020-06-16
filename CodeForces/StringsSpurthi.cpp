#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int ans=1;
        cin>>s;
        for(int i=0;s[i];i++)
        {
            if(s[i]!=s[i+1])
            ans++;
        }
        cout<<2*ans<<endl;
    }
    return 0;
}