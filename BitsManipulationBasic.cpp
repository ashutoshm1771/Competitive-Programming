// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k=log2(n)+1; //Count number of bits in n
	cout<<k<<endl;
	int m=n^(1<<1);
	cout<<m;
}
