// Author : Ashutosh Mishra

#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	Node(int data)
	{
		this->data = data;
		left=right=NULL;
	}
};
typedef struct Node* tptr;
tptr newNode(int data)
{
	tptr node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->left = node->right = NULL;
}
tptr bstInsert(tptr root,int data)
{
	if(root==NULL)return(new Node(data));
	if(data < root->data)
		root->left=bstInsert(root->left , data);
	else if(data > root->data)
		root->right=bstInsert(root->right , data);
	else return root;
}
void inorder(tptr root)
{
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	int a;
	cin>>a;
	tptr root=NULL;
	while(a!=-1)
	{
		root=bstInsert(root,a);
		cin>>a;
	}
	inorder(root);
	return 0;
}
