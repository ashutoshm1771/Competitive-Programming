// Author : Ashutosh Mishra

#include <iostream>
#include <cmath>
using namespace std;
typedef long int li;
typedef long double ld;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	li t;
	cin>>t;
	while(t--)
	{
	    ld f,d,ta,bs;
	    cin>>f>>d>>ta>>bs;
	    ld tb=f/bs;
	    ld tt=sqrt( (2*(f+d)) / ta );
	    if(tb<tt)cout<<"Bolt"<<endl;
	    else cout<<"Tiger"<<endl;
	}
	return 0;
}

