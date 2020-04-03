#include <iostream>
#include<vector>
#include<map>
//#include<climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ip,mip;
	    cin>>n>>mip;
	    map<int,int> m;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }

	    for(int i=0;i<n;i++)
	    {
	        cin>>ip;
	        m[v[i]]+=ip;
	    }
	    int ma=1000;
	    for(int i=1;i<=mip;i++)
        {
            cout<<m[i]<<" ";
                if(ma > m[i] && m[i]) {
                    cout<<ma<<" ";
                    ma=m[i];
                }
        }
	    cout<<ma<<endl;
	}
	return 0;
}
