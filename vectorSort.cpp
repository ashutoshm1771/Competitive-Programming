// Author : Ashutosh Mishra

//#include 'stdafx.h'
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	vector<int> v ={5,4,3,2,1};
	//cout<<v.begin()<<endl;
	sort(v.begin(),v.end());
	for(int i=0;i<v.end();i++)
	cout<<v[i]<<" ";
}
