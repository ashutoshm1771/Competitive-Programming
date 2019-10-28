#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int n,ip;
    int b,e,sq;
    cin>>n;
    vector<int>v;
   	for(int i=0;i<n;i++)
    {
        cin>>ip;
        v.push_back(ip);
    }
    
    cin>>sq;
  
    
    cin>>b>>e;
    v.erase(v.begin()+sq-1);
    v.erase(v.begin()+b-1,v.begin()+e-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}

