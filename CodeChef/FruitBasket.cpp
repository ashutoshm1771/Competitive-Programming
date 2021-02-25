// Author : Ashutosh Mishra

#include<iostream>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    IOS
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=a+b,y=b+c;
        cout<<(3*d-x-y)<<" "<<(x-d)<<" "<<(y-d)<<endl;
    }
    return 0;
}
