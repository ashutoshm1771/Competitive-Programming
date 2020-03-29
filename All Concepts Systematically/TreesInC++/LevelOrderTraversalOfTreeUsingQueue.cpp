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
		left=right=NULL;
	}
};
typedef struct Node* tptr;
tptr bstInsert(tptr root,int data)
{
	if(root==NULL)return new Node(data);
	if(data < root->data ) root->left = bstInsert(root->left , data);
	else if(data > root->data ) root->right = bstInsert(root->right,data);
	else return root;
}
void levelPrint(tptr root)
{
	queue<tptr> q;
	if(root==NULL)return ;
	q.push(root);
	q.push(NULL);
	while( q.size() > 1)
	{
		tptr temp=q.front();
		q.pop();
		if(temp==NULL)
		{
			puts("");
			q.push(NULL);
		}
		else{
			if(temp->left)q.push(temp->left);
			if(temp->right)q.push(temp->right);
			cout<<temp->data<<" ";
		}
	}
}
int main()
{
	int n;
	cin>>n;
	tptr root=NULL;
	while(n!=-1)
	{
		root=bstInsert(root,n);
		cin>>n;
	}
	levelPrint(root);
	return 0;
}
