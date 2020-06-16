// Author : Ashutosh Mishra

#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int zc=0,oc=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='z')zc++;
        else oc++;
    }
    if(2*zc != oc ) cout<<"No";
    else cout<<"Yes";
    return 0;
}
