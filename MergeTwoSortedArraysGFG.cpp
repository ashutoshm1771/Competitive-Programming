#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,ip;
	    cin>>m>>n;
	    vector<int> vm,vn;
	    for(int i=0;i<m;i++)
	    {
	        cin>>ip;
	        vm.push_back(ip);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>ip;
	        vn.push_back(ip);
	    }
	    int i=0,j=0;
	    while(i<m && j<n)
	    {
	        if(vm[i]<vn[j]){
	            cout<<vm[i]<<" ";
	            i++;
	        }
	        else
	        {
	            cout<<vn[j]<<" ";
	            j++;
	        }
	    }
	    while(i<m){
	        cout<<vm[i]<<" ";
	        i++;
	    }
	    while(j<n){
	        cout<<vn[j]<<" ";
	        j++;
	    }
	    cout<<endl;
	}
	return 0;
}
