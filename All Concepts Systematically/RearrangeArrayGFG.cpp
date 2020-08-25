// Author : Ashutosh Mishra

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n,ip;
	    cin>>n;
	    vector<int> v;
	    bool flag=true;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ip;
	        v.push_back(ip);
	    }
	    int i=0,j=n-1;
	    while(i<=j)
	    {
	        if(flag)
	        {
	            cout<<v[j]<<" ";
	            j--;
	            flag=false;
	        }
	        else
	        {
	            cout<<v[i]<<" ";
	            i++;
	            flag=true;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
