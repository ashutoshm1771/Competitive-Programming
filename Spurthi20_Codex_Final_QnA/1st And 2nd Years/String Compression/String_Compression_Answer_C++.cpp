// Author : Ashutosh Mishra

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
            if(s[i]!=s[i+1]) c++;
        cout<<2*c<<endl;
    }
    return 0;
}
