// Author : Ashutosh Mishra

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int ip;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        v.push_back(ip);
    }
    sort(v.begin(),v.end());
    int nq;
    vector<int>q;
    cin>>nq;
    for(int i=0;i<nq;i++)
    {
        cin>>ip;
        q.push_back(ip);
    }
    vector<int>::iterator lower;
    
    for(int i=0;i<nq;i++)
    {
        lower=lower_bound(v.begin(),v.end(),q[i]);
        if(v[lower-v.begin()]==q[i])
        {
            cout<<"Yes"<<" "<<lower-v.begin()+1<<endl;
        }
        else
        cout<<"No"<<" "<<lower-v.begin()+1<<endl;
    }
    return 0;
}

