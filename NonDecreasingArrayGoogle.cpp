#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,ip;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	bool flag=true;
	for(int i=0;i<n-1;i++)
	{
		if(v[i]>v[i+1] && flag=true)
		{
			flag=false;
		}
		else if(v[i]>v[i+1] && flag=false){
			cout<<"False";
			exit(0);
		}
	}
	cout<<"True";
	return(0);
}
