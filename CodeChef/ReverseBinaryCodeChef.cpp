#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bitset<32> b(n),b1;
        for(int i=0;i<32;i++)
        {
            b1[i]=b[31-i];
        }
        cout<<b1.ulong()<<endl;
    }
    return 0;
}