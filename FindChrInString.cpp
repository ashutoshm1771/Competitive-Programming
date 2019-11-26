#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="Hello";
	char s;
	cin>>s;
	size_t f=str.find(s);
	if(f!=string::npos)
	cout<<"String found first at "<<f;
	else
	cout<<"Not found";
}
