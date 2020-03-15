#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,ip;
        cin>>n;
        vector<int> v;
        map<int,int> m;
        int maxx=0;
        for(int i=0;i<n;i++)
        {
            cin>>ip;
            m[ip]++;
            if(maxx<m[ip])maxx=m[ip];
            v.push_back(ip);
        }
        cout<<v.size()-maxx<<endl;
    }
    return 0;
}
