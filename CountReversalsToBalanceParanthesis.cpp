// Author : Ashutosh Mishra

#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cout<<s.size()<<endl;
	if(s.size()%2){	
		cout<<-1<<endl;
		exit(0);
	}
	stack<int> st;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='}' && st.size())
		{
			if(st.top()=='{') st.pop();
			else st.push(s[i]);
		}
		else st.push(s[i]);
	}
	int rl=st.size();
	int n=0;
	while(!st.empty())
	{
		if(st.top()=='{')n++;
		st.pop();
	}
	cout<<(rl/2+n%2)<<endl;
	return 0;
}
