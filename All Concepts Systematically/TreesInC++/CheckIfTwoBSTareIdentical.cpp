// Author : Ashutosh Mishra

#include<iostream>
#include<cstdlib>
using namespace std;
struct TreeNode{
	int data;
	struct TreeNode *left,*right;
	TreeNode(int data)
	{
		this->data=data;
		left = right = NULL;
	}
};
typedef struct TreeNode* tptr;
tptr newNode(int data)
{
	tptr node=(struct TreeNode*)malloc(sizeof(struct TreeNode));
	node->data = data;
	node->left = node->right = NULL;
	return node;
}
tptr bstInsert(tptr root,int data)
{
	if(root==NULL) return new TreeNode(data); // return newNode(data);
	else{
		if(data < root->data ) root->right=bstInsert(root->right , data);
		else if( data > root->data ) root->left=bstInsert(root->left,data);
		else return root;
	}	
}
bool areIdentical(tptr root1,tptr root2)
{
	if(root1==NULL && root2==NULL)return true;
	else return (
		root1->data==root2->data && areIdentical(root1->left,root2->left) && areIdentical(root1->right,root2->right)	
	);
}
int main()
{
	int n;
	cin>>n;
	tptr root1=NULL,root2=NULL;
	while(n!=-1)
	{
		root1=bstInsert(root1,n);
		cin>>n;
	}
	cin>>n;
	while(n!=-1)
	{
		root2=bstInsert(root2,n);
		cin>>n;
	}
	if(areIdentical(root1,root2))cout<<"Identical"<<endl;
	else puts("Not Identical");
	return 0;
}
