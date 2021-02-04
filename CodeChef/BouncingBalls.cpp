// Author : Ashutosh Mishra

#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s,c=0,e;
        cin>>n;
        while(n)
        {
            e=log2(n);
            s = pow(2,e);
            n -= s;
            //cout<<s<<" ";
            c++;
        }
        if(c)
        cout<<c-1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
