#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main()
{
	ld degh,p,l,degm,dec,time;
	cin>>p>>l;
	time=(p*l)/360;
	dec=(time-int(time))*100;
	degh=30*int(time);
	cout<<degh<<endl;
	degm=(90*dec)/25;
	cout<<min(abs(degh-degm),(degm-degh));
	return 0;
}
