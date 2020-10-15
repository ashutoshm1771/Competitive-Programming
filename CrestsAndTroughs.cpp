// Author : Ashutosh Mishra

#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

vector<int> v;

int crest()
{
	int mind=INT_MAX,maxd=-INT_MAX,mini,maxi,td;
	for(int i=1;i<v.size()-1;i++)
	{
		if(v[i-1] < v[i] && v[i+1] < v[i])
		{
			td=v[i]-v[i-1];
			if(td<mind){
				mini=i;
				mind=td;
			}
			if(td>=maxd){
				maxi=i;
				maxd=td;
			}
			td=v[i]-v[i+1];
			if(td<mind){
				mini=i;
				mind=td;
			}
			if(td>=maxd){
				maxi=i;
				maxd=td;
			}
		}
	}
	return abs(mini-maxi);
}
int trough()
{
	int mind=INT_MAX,maxd=-INT_MAX,mini,maxi,td;
	for(int i=1;i<v.size()-1;i++)
	{
		if(v[i-1] > v[i] && v[i+1] > v[i])
		{
			td=v[i-1]-v[i];
			if(td<mind){
				mini=i;
				mind=td;
			}
			if(td>=maxd){
				maxi=i;
				maxd=td;
			}
			td=v[i+1]-v[i];
			if(td<mind){
				mini=i;
				mind=td;
			}
			if(td>=maxd){
				maxi=i;
				maxd=td;
			}
		}
	}
	return abs(mini-maxi);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		v.clear();
		v.resize(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		cout<<crest()<<" "<<trough()<<endl;
		cout<<max(crest(),trough())<<endl;
	}
	return 0;
}
/* Sample Test Case
1
8
3 6 2 8 9 5 10 1
*/
