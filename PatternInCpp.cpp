#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int en=1,ispace=2*n-2;
    for(int k=0;k<n;k++)
    {
        for(int i=1;i<=en;i++)
            cout<<i;
        for(int i=0;i<ispace;i++)
            cout<<" ";
        for(int i=en;i>=1;i--)
            cout<<i;
        en++;
        ispace-=2;
        cout<<endl;
    }
    return 0;
}