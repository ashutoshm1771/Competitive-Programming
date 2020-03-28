#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
};
typedef struct Node* tptr;
tptr newNode(int data)
{
	tptr node=(struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->left = node->right = NULL;
	return node;
}
tptr bstInsert(tptr root,int data)
{
	if(root==NULL)return newNode(data);
	if( data < root->data) root->left=bstInsert(root->left,data);
	else if(data > root->data) root->right=bstInsert(root->right,data);
	else return root;
}
int minVal(tptr root)
{
	tptr curr=root;
	while(curr->left!=NULL)
	curr=curr->left;
	return curr->data;
}
int maxVal(tptr root)
{
	tptr curr=root;
	while(curr->right!=NULL)
		curr=curr->right;
	return curr->data;
}
void inorder(tptr root)
{
	if(root==NULL)return;
	inorder(root->left );
	cout<<root->data<<" ";
	inorder(root->right );
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
	inorder(root);
	cout<<minVal(root)<<endl;
	cout<<maxVal(root)<<endl;
	return 0;
}
