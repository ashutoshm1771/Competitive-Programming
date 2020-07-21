// Author : Ashutosh Mishra

#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,ip;
	    cin>>n>>m;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ip;
	        v.push_back(ip);
	    }
	    int i=0,j=0,c=0,s;
	    while(j<n)
	    {
	        s=0;
	        for(int k=i;k<=j;k++)
	        s+=v[k];
	        if(s==m){
	            cout<<i+1<<" "<<j+1<<endl; c++; break;
	        }
	        else if(s>m)i++;
	        else j++;
	    }
	    if(c==0)cout<<"-1"<<endl;
	}
	
	return 0;
}
