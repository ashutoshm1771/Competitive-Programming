#include<iostream>
#define MAXSIZE 50
using namespace std;
typedef int item;
item s[MAXSIZE];
int top;
void push(item x)
{
	if(top==MAXSIZE-1)
	{
		cout<<"Stack Full";
		exit(0);
	}
	top++;
	s[top]=x;
}
item pop()
{
	if(top==-1)
	{
		cout<<"Stack Empty";
		exit(0);
	}
	item x=s[top];
	top--;
	return x;
}
bool stackEmpty()
{
	if(top==-1)
	return true;
	return false;
}
item stackTop()
{
	if(top==-1)
	{
		cout<<"Stack Empty";
		exit(0);
	}
	item x=s[top];
	return x;
}
int main()
{
	item x;
	top=-1;
	cin>>x;
	while(x!=-1)
	{
		push(x);
		cin>>x;
	}
	while(!stackEmpty())
	{
		x=stackTop();
		cout<<x;
		x=pop();
	}
	return 0;
}
