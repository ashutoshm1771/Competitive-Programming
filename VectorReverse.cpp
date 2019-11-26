#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> a,int low,int high)
{
	int t;
	while(low<high)
	{
		t=a[low];
		a[low]=a[high];
		a[high]=t;
		low++;
		high--;
	}
}
int main()
{
	int n,ip;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ip;
		v.push_back(ip);
	}
	reverse(v,0,n-1);
	for(int i=0;i<n;i++)
	cout<<v[i]<<endl;
	return 0;
}
