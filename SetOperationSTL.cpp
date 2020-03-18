// Author : Ashutosh Mishra

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    set<int>s;
    int a[2];
    while(n--)
    {
        cin>>a[0]>>a[1];
        if(a[0]==1)
        {
            s.insert(a[1]);
        }
        else if(a[0]==2)
        {
            s.erase(a[1]);
        }
        else
        {
            set<int>::iterator it=s.find(a[1]);
            if(it!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }   
    return 0;
}




