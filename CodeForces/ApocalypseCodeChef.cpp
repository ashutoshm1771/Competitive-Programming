// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll r,c,x,y;
        cin>>r>>c;
        cin>>x>>y;
        // cout<<r<<c<<x<<y;
        // cout<<max(1,2)<<endl;  (x+y)  (x+abs(y-c+1))  (abs(x-r+1)+y) (abs(x-r+1)+abs(y-c+1))
        cout<<max( (x+y) , max( (x+abs(y-c+1)) , max( (abs(x-r+1)+y) , (abs(x-r+1)+abs(y-c+1)) ) ) )<<endl;
    }
    return 0;
}
