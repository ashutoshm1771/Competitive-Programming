// Author : Ashutosh Mishra

#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left,*right;
	Node(int data){
		this->data=data;
		left=right=NULL;
	}
};

typedef struct Node* tptr;

void inorder(tptr root)
{
	if(root==NULL)return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(tptr root)
{
	if(root==NULL)return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(tptr root)
{
	if(root==NULL)return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int main()
{
	tptr root=new Node(5);
	root->left=new Node(6);
	root->right=new Node(7);
	inorder(root); cout<<endl;
	preorder(root); puts("");
	postorder(root); puts("");
	return 0;
}
