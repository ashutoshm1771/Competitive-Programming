// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int ip,n;
	    vector<int> v;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ip;
	        v.push_back(ip);
	    }
	    int low=0,mid=0,high=n-1;
	    while(mid<=high)
	    {
	        if(v[mid]==0)
	        {
	            swap(v[low],v[mid]);
	            low++;
	            mid++;
	        }
	        else if(v[mid]==2)
	        {
	            swap(v[mid],v[high]);
	            high--;
	        }
	        else
	            mid++;
	    }
	    for(int i=0;i<n;i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
