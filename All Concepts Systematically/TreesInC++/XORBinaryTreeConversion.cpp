// Author : Ashutosh Mishra

#include<iostream>
#include<cstdlib>
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
void convertTree(tptr root)
{
	if(root==NULL)return;
	convertTree(root->left);
	convertTree(root->right);
	if(root->left!=NULL && root->right!=NULL)
		root->data = root->left->data | root->right->data;
}
void inorder(tptr root)
{
	if(root==NULL)return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	tptr root=new Node(0);
	root->left=new Node(1);
	root->right=new Node(1);
	root->left->left=new Node(0);
	root->left->right=new Node(1);
	root->right->left=new Node(1);
	inorder(root);
	puts("");
	convertTree(root);
	inorder(root);
	return 0;
}
