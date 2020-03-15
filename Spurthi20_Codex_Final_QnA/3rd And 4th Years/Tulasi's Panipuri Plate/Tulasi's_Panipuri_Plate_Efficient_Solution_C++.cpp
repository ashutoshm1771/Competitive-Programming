#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void update(int i)
{
    while(i>=1)
    {
        v[i]=max(v[i*2],v[i*2+1]);
        i/=2;
    }
}
int findMax()
{
    return v[1];
}
int main()
{
    int n;
    cin>>n;
    v.resize(2*n);
    for(int i=0;i<n;i++)
    {
        cin>>v[n+i];
    }
    for(int i=n-1;i>0;i--)
    {
        v[i]=max(v[i*2],v[i*2+1]);
    }
    int q,newNum;
    
    cin>>q;
    int i=n;
    while(q--)
    {
        cin>>newNum;
        v[i]=newNum;
        update(i/2);
        cout<<findMax();
        i++;
        if(i==2*n) i=n;
    }
    return 0;
}
