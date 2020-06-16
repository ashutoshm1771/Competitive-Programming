#include<bits/stdc++.h>
using namespace std;
int valLen(string s)
{
    if(s[0]=='>')return 0;
    stack<char> stk;
    int c=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='<')stk.push(s[i]);
        else{
            if(stk.empty())return c;
            stk.pop();
            c+=2;
        }
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s; // <<><>>> --> 6
        cin>>s;
        cout<<valLen(s)<<endl;
    }
    return 0;
}