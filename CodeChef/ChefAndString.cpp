#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
string lef(string res)
{
    string s=res;
    reverse(s.begin()+1, s.end()); 
    reverse(s.begin(), s.end()); 
    return s;
}
string right(string res)
{
    string s=res;
    reverse(s.begin(), s.begin()+s.size()-1);
    reverse(s.begin(), s.end()); 
    return s;
}
bool isSame(string s)
{
    if(lef(s)==right(s))return true;
    else return false;
}
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(isSame(s))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
