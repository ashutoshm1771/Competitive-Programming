#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,ip;
    cin>>n>>k;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
    	cin>>ip;
    	a.push_back(ip);
	}
	int i,c=0;
	for(i=0;i<k;i++)
	{
		if(a[i]>0){c++;}
	}
	while(a[i-1]==a[i] && i<n && a[i]>0)
	{
		c++;
		i++;
	}
	cout<<c;
	return 0;
}
