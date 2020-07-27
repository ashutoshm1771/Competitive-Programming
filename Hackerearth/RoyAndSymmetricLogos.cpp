// Author : Ashutosh Mishra

#include<iostream>

#include<vector>

using namespace std;

bool isSym(vector<string> v)
{
    int n=v.size();
    for(int i=0;i<=(n/2);i++)
    {
        for(int j=0;j<=(n/2);j++)
            if(v[i][j] != v[i][n-j-1] || v[i][j] != v[n-i-1][j])
                return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string > v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(isSym(v))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
