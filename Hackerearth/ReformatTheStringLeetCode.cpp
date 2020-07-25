// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

bool isChar(char x)
    {
        if(x>='a' && x<='z')return true;
        return false;
    }
    string charInEven(string s)
    {
        cout<<1<<endl;
        string t(s.size(),' ');
        int ec=0,oc=1;
        for(auto x: s)
        {
            if(isChar(x)){
                t[ec]=x;
                ec+=2;
            }
            else{
                t[oc]=x;
                oc+=2;
            }
        }
        return t;
    }
    string charInOdd(string s)
    {
        string t(s.size(),' ');
        int ec=0,oc=1;
        for(auto x: s)
        {
            if(isChar(x)){
                t[oc]=x;
                oc+=2;
            }
            else{
                t[ec]=x;
                ec+=2;
            }
        }
        return t;
    }
string reformat(string s) {
        map<bool,int> m;
        for(auto x: s)
        {
            if(isChar(x))
                m[0]++; // char
            else m[1]++;// digits
        }
        string res="";
        if(s.size()&1){
            if(((m[0]==int(s.size()/2)+1) && (m[1]==int(s.size()/2))) || ((m[0]==int(s.size()/2)) && (m[1]==int(s.size()/2)+1)))
            {
                int c=m[0],d=m[1];
                if(c>=d)res=charInEven(s);
                else res=charInOdd(s);
                return res;
            }
            else return "";
        }
        else{
            if(m[0]==s.size()/2){
                return charInEven(s);
            }
            else return "";
        }
    }
int main()
{
    string s;
    cin>>s;
    cout<<reformat(s);
    return 0;
}
