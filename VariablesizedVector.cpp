#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,ip,s;
    cin>>n>>q;
    vector<vector<int> >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v[i]=vector<int>(s);
        for(int j=0;j<s;j++)
        {
            cin>>ip;
            v[i][j]=ip;
        }
    }
    int a,b;
    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        cout<<v[a][b]<<endl;
    }
    //cout<<v[0][1];
    return 0;
}


