// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return true;
    return false;
}
int main()
{
    long MOD=1e9+7;
    int t;
    cin>>t;
    while(t--)
    {
        string s,ans="";
        cin>>s;
        for(auto x: s)
        {
            if(isVowel(x))ans+='0';
            else ans+='1';
        }
        cout<<ans<<endl;
        bitset<32> b(ans);
        cout<<((b.to_ulong())%MOD)<<endl;
    }
    return 0;
}
