#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef double d;
int main()
{
	IOS
	int t;
	cin>>t;
	while(t--)
	{
		int c=0;
		d i=1,n;
		d numer=0,denom=0;
		cin>>n;
		while(n!=-1)
		{
			if(n>=30)c++;
			if(int(n)%2==0){
				//cout<<n<<" "<<i<<endl;
				numer+=(i*n);
				denom+=i;
			}
			i++;
			cin>>n;
		}
		cout<<c<<" ";
		cout<<fixed<<setprecision(2)<<numer/denom<<endl;
	}
	return 0;
}
