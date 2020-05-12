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
tptr bstInsert(tptr root,int data)
{
	if(root==NULL)return new Node(data);
	if( data < root->data ) root->left=bstInsert(root->left,data);
	else if( data > root->data ) root->right=bstInsert(root->right,data);
	else return root;
}
int findMirror(int target,tptr left,tptr right)
{
	if(left==NULL || right==NULL)return 0;
	if(left->data==target)return right->data;
	if(right->data==target)return left->data;
	int mirrorValue=findMirror(target,left->left,right->right);
	if(mirrorValue)return mirrorValue;
	findMirror(target,left->right,right->left);
}
int mirrorElement(tptr root,int target)
{
	if(root==NULL)return 0;
	if(root->data==target)return target;
	return findMirror(target,root->left,root->right);
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
	int n,t,target;
	cin>>n;
	tptr root=NULL;
	while(n!=-1)
	{
		root=bstInsert(root,n);
		cin>>n;
	}
	inorder(root);
	cin>>t;
	while(t--)
	{
		cin>>target;	
		cout<<mirrorElement(root,target)<<endl;
	}
	return 0;
}
