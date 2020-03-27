// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
#include<map>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,ip;
    cin>>n;
    vector<int> B;
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        B.push_back(ip);
    }
    map<char,int> m;
    int b=0,c=0,f=0;
    for(int x: B)
    {
        if(x&1) m['O']++;
        else m['E']++;
    }
    if(m['O']&1) {
        cout<<"NO";
        exit(0);
    }
    else{
        
        for(int i=0;i<B.size();i++)
        {
            if(B[i]&1 && c==0){
                c++;
                b=i;
            }
            else if(B[i]&1 && c==1){
                c=0;
                f+=(i-b);
            }
        }
    }
    cout<<f*2;
}
