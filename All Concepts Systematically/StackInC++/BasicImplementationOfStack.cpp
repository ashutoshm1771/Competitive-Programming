// Author : Ashutosh Mishra

#include<iostream>
#define MAX 100
using namespace std;

class Stack{
	int top;
	public:
		Stack(){ 
			top = -1;
		}
		int s[MAX];
		bool isEmpty();
		bool push(int x);
		int pop();
		int peek();
};

bool Stack::push(int x)
{
	if(top>=(MAX-1)){
		cout<<"Overflow";
		return false;
	}

	else{
		s[++top]=x;
		cout<<"Pushed"<<endl;
		return true;
	}
}

bool Stack::isEmpty()
{
	return top<0;
}

int Stack::pop()
{
	if(top<0){ 
		cout<<"Stack Empty"<<endl;
		return 0;
	}
	else{
		int x=s[top--];
		return x;
	}
}
int Stack::peek()
{
	if(top<0){
		cout<<"Stack Empty"<<endl;
		return 0;
	}
	else{
		int x=s[top];
		return x;
	}
}



int main()
{
	Stack s;
	s.push(2);
	s.push(3);
	cout<<s.pop()<<endl;
	cout<<s.peek()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.isEmpty();
	return 0;
}
