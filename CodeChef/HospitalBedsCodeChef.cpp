// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool isSafe(vector<vector<bool> > v)
{
    for(int i=1;i<v.size()-1;i++)
    {
        for(int j=1;j<v.size()-1;j++)
        {
            if(v[i][j])
            if(v[i+1][j] || v[i-1][j] || v[i][j-1] || v[i][j+1]){ //cout<<i<<j;
                return false; }
        }
    }
    int i;
    for(int j=1;j<v.size()-1;j++)
    {
        if(v[0][j]){
            i=0;
            if(v[i][j-1] || v[i+1][j] || v[i][j+1]){ //cout<<i<<j<<"F";
                return false; } }
        if(v[j][0]){
            i=0;
            if(v[j+1][i] || v[j][i+1] || v[j-1][i]){ //cout<<i<<j<<"S";
                return false; } }
        if(v[v.size()-1][j]){
            i=v.size()-1;
            if(v[i][j-1] || v[i][j+1] || v[i-1][j]){ //cout<<i<<j<<"T";
                return false; } }
        if(v[j][v.size()-1]){
            i=v.size()-1;
            if(v[j-1][i] || v[j+1][i] || v[j][i-1]){ //cout<<i<<j<<"Fo";
                return false; }
        }
    }
    if(v[0][0] && (v[1][0] || v[0][1]))return false;
    if(v[0][v.size()-1] && (v[1][v.size()-1] || v[0][v.size()-2]))return false;
    if(v[v.size()-1][0] && (v[v.size()-2][0] || v[v.size()-1][1]))return false;
    if(v[v.size()-1][v.size()-1] && (v[v.size()-1][v.size()-2] || v[v.size()-2][v.size()-1]))return false; 
    return true;
}

int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool ip;
        vector<vector<bool> > v(n);
        for(int i=0;i<n;i++)
        {
            //v[i]=vector<bool>(n);
            for(int j=0;j<n;j++)
            {
                cin>>ip;
                v[i].push_back(ip);
            }
        }
        if(isSafe(v))cout<<"SAFE"<<endl;
        else cout<<"UNSAFE"<<endl;
    }
    return 0;
}
