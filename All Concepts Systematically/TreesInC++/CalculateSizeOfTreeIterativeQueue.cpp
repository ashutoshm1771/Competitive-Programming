// Author : Ashutosh Mishra

#include<iostream>
#include<cstdlib>
#include<queue>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	Node(int data)
	{
		this->data=data;
		left = right = NULL;
	}
};
typedef struct Node* tptr;
tptr bstInsert(tptr root,int data)
{
	if(root==NULL)return new Node(data);
	if( data < root->data ) root->left = bstInsert(root->left, data);
	else if(data > root->data) root->right = bstInsert(root->right, data);
	else return root;
}
int calcSize(tptr root)
{
	if(root==NULL) return 0;
	int c=1;
	queue<tptr> q;
	q.push(root);
	while(!q.empty())
	{
		tptr temp=q.front();
		if(temp->left){
			c++;
			q.push(temp->left);
		}
		if(temp->right){
			c++;
			q.push(temp->right);
		}
		q.pop();
	}
	return c;
}
int main()
{
	int n;
	tptr root=NULL;
	cin>>n;
	while(n!=-1)
	{
		root=bstInsert(root,n);
		cin>>n;
	}
	cout<<calcSize(root);
	return 0;
}
