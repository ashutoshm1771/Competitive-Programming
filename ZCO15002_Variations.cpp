#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long n,k,ip,c=0;
	cin>>n>>k;
	vector<long> v;
	for(long i=0;i<n;i++){
	    cin>>ip;
	    v.push_back(ip);
	}
	sort(v.begin(),v.end());
	int i=0,j=1;
	while(j<n)
    {
        if((v[j]-v[i])>=k)
        {
            c +=(n-j);
            i++;
        }
        else
        {
            j++;
        }
    }
	cout<<c;
	return 0;
}

