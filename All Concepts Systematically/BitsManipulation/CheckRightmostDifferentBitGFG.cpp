#include<iostream>
#include<bitset>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b;
	    bitset<32> bset1(a),bset2(b);
	    for(int i=0;i<bset1.size();i++)
	    {
	        if(bset1[i]!=bset2[i])
	        {
	            c=i+1;
	            break;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
