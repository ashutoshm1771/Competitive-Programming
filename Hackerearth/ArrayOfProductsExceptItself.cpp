// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
vector<int> arrProd() // Using Extra Space
{
    const int n=v.size();
    vector<int> pref,suf(n+1);
    pref.push_back(1);
    suf[n]=1;
    for(auto x: v)
        pref.push_back(pref.back()*x);
    for(int i=n-1;i>=0;i--)
    {
        suf[i]=suf[i+1]*v[i];
    }
    vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
        ans[i]=pref[i]*suf[i+1];
    }
    return ans;
}
vector<int> arrProd2() // Constant Space
{
    const int n=v.size();
    vector<int> res;
    for(auto x: v)
        res.push_back(1);
    for(int i=n-2;i>=0;i--)
        res[i]=res[i+1]*v[i+1];
    int left=1;
    for(int i=0;i<n;i++)
    {
        res[i]=res[i]*left;
        left *= v[i];
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    v.clear();
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(auto x: v)
        cout<<x<<" ";
    puts("");
    vector<int> vp=arrProd2();
    for(auto x: vp)
        cout<<x<<" ";
    return 0;
}
