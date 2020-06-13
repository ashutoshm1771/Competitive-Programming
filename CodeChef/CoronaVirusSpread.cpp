#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    IOS
    int t,n;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        cin>>n;
        v.resize(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int i=0,c=0,fmin=INT_MAX,fmax=0,s;
        bool fl=false;
        while(i<n)
        {
            fl=false; 
            s=0;
            while(v[i+1]-v[i]<=2)
            {
                s++;
                i++;
                if(i==n){
                    fl=true;
                    fmin=min(fmin,s);
                    fmax=max(fmax,s);
                    break;
                }
            }
            if(fl)break;
            s++;
            fmin=min(fmin,s);
            fmax=max(fmax,s);
            c++;
            i++;
        }
        cout<<fmin<<" "<<fmax<<endl;
    }
    return 0;
}